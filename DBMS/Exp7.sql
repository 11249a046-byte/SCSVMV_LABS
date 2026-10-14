-- ============================================================
-- EXPERIMENT 7
-- CREATION OF VIEWS, SEQUENCE, INDEX AND SAVEPOINT
-- ============================================================

-- AIM:
-- To study and execute SQL commands for creating and using
-- Views, Sequences, Indexes and Savepoints.

-- ============================================================
-- 1. CREATE STUDENT TABLE
-- ============================================================

CREATE TABLE STUDENT (
    ROLLNO NUMBER(5) PRIMARY KEY,
    NAME VARCHAR2(30),
    DEPARTMENT VARCHAR2(20),
    MARKS NUMBER(3)
);

-- ============================================================
-- 2. INSERT SAMPLE RECORDS
-- ============================================================

INSERT INTO STUDENT VALUES (101, 'ARUN', 'CSE', 85);
INSERT INTO STUDENT VALUES (102, 'PRIYA', 'ECE', 90);
INSERT INTO STUDENT VALUES (103, 'KUMAR', 'CSE', 78);
INSERT INTO STUDENT VALUES (104, 'DIVYA', 'IT', 88);
INSERT INTO STUDENT VALUES (105, 'RAHUL', 'CSE', 92);

COMMIT;

-- Display all student records
SELECT * FROM STUDENT;

-- Sample Output:
-- ROLLNO  NAME   DEPARTMENT  MARKS
-- 101     ARUN   CSE         85
-- 102     PRIYA  ECE         90
-- 103     KUMAR  CSE         78
-- 104     DIVYA  IT          88
-- 105     RAHUL  CSE         92


-- ============================================================
-- 3. CREATION OF VIEW
-- ============================================================

-- Create a view to display only CSE students

CREATE VIEW CSE_STUDENTS AS
SELECT ROLLNO, NAME, MARKS
FROM STUDENT
WHERE DEPARTMENT = 'CSE';

-- Display the view
SELECT * FROM CSE_STUDENTS;

-- Sample Output:
-- ROLLNO  NAME   MARKS
-- 101     ARUN   85
-- 103     KUMAR  78
-- 105     RAHUL  92

-- Remove the view
DROP VIEW CSE_STUDENTS;


-- ============================================================
-- 4. CREATION OF SEQUENCE
-- ============================================================

-- Create a sequence to generate unique roll numbers

CREATE SEQUENCE STUDENT_SEQ
START WITH 106
INCREMENT BY 1
NOCACHE
NOCYCLE;

-- Generate sequence values
SELECT STUDENT_SEQ.NEXTVAL FROM DUAL;
SELECT STUDENT_SEQ.NEXTVAL FROM DUAL;

-- Sample Output:
-- NEXTVAL
-- 106
-- 107

-- Insert a student using the sequence
-- The next generated value will be 108

INSERT INTO STUDENT
VALUES (STUDENT_SEQ.NEXTVAL, 'SNEHA', 'CSE', 89);

COMMIT;

-- Display all student records
SELECT * FROM STUDENT;

-- Sample Output:
-- The table now contains 6 students.
-- SNEHA has roll number 108 and marks 89.

-- Remove the sequence
DROP SEQUENCE STUDENT_SEQ;


-- ============================================================
-- 5. CREATION OF INDEX
-- ============================================================

-- Create an index on the NAME column

CREATE INDEX IDX_STUDENT_NAME
ON STUDENT(NAME);

-- Retrieve a student using the indexed column
SELECT * FROM STUDENT
WHERE NAME = 'ARUN';

-- Sample Output:
-- ROLLNO  NAME  DEPARTMENT  MARKS
-- 101     ARUN  CSE         85

-- Remove the index
DROP INDEX IDX_STUDENT_NAME;


-- ============================================================
-- 6. SAVEPOINT AND ROLLBACK
-- ============================================================

-- Step 1: Insert MOHAN

INSERT INTO STUDENT
VALUES (106, 'MOHAN', 'IT', 80);

-- Create a savepoint
SAVEPOINT SP1;

-- Step 2: Insert LATHA after the savepoint

INSERT INTO STUDENT
VALUES (107, 'LATHA', 'ECE', 87);

-- Display records before rollback
SELECT * FROM STUDENT;

-- Sample Output:
-- Both MOHAN and LATHA are present.

-- Step 3: Roll back to the savepoint
-- This cancels the LATHA insertion only.

ROLLBACK TO SP1;

-- Step 4: Display records after rollback
SELECT * FROM STUDENT;

-- Sample Output:
-- MOHAN remains in the table.
-- LATHA is removed because her insertion was after SP1.

-- Step 5: Save the remaining changes permanently
COMMIT;

-- ============================================================
-- 7. DIFFERENCE BETWEEN COMMIT AND ROLLBACK
-- ============================================================

-- COMMIT:
-- Saves all current transaction changes permanently.

-- ROLLBACK:
-- Cancels all uncommitted changes in the current transaction.

-- ROLLBACK TO SP1:
-- Cancels changes made after the specified savepoint,
-- while preserving changes made before that savepoint.

-- ============================================================
-- RESULT
-- ============================================================

-- Thus, the SQL commands for creating and using a View,
-- Sequence, Index and Savepoint were executed and verified.