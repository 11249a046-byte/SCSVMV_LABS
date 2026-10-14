-- ============================================================
-- EXPERIMENT 8
-- NORMALIZATION IN ORACLE (1NF, 2NF, 3NF, 4NF, 5NF)
-- USING FUNCTIONAL DEPENDENCIES
-- ============================================================

-- AIM:
-- To implement normalization from 1NF to 5NF using Oracle SQL
-- and reduce redundancy and data anomalies.

-- ============================================================
-- 1. FIRST NORMAL FORM (1NF)
-- Every column must contain atomic values.
-- ============================================================

CREATE TABLE StudentCourse_1NF (
    SID          VARCHAR2(10),
    SName        VARCHAR2(30),
    Course       VARCHAR2(20),
    Faculty      VARCHAR2(30),
    FacultyPhone VARCHAR2(15),
    Dept         VARCHAR2(10),
    HOD          VARCHAR2(30),
    CONSTRAINT pk_1nf PRIMARY KEY (SID, Course)
);

INSERT INTO StudentCourse_1NF
VALUES ('S1', 'Arun', 'DBMS', 'Ravi', '9990001', 'CSE', 'Dr. Sharma');

INSERT INTO StudentCourse_1NF
VALUES ('S1', 'Arun', 'OS', 'Meena', '9990002', 'CSE', 'Dr. Sharma');

INSERT INTO StudentCourse_1NF
VALUES ('S2', 'Bala', 'DBMS', 'Ravi', '9990001', 'CSE', 'Dr. Sharma');

COMMIT;

-- Display 1NF table
SELECT * FROM StudentCourse_1NF;

-- Expected Output:
-- SID  SNAME  COURSE  FACULTY  FACULTYPHONE  DEPT  HOD
-- S1   Arun   DBMS    Ravi     9990001       CSE   Dr. Sharma
-- S1   Arun   OS      Meena    9990002       CSE   Dr. Sharma
-- S2   Bala   DBMS    Ravi     9990001       CSE   Dr. Sharma


-- ============================================================
-- 2. SECOND NORMAL FORM (2NF)
-- Remove partial dependencies from the composite key.
-- ============================================================

CREATE TABLE Student_2NF (
    SID   VARCHAR2(10) PRIMARY KEY,
    SName VARCHAR2(30)
);

CREATE TABLE Course_Faculty_2NF (
    Course       VARCHAR2(20) PRIMARY KEY,
    Faculty      VARCHAR2(30),
    FacultyPhone VARCHAR2(15),
    Dept         VARCHAR2(10),
    HOD          VARCHAR2(30)
);

INSERT INTO Student_2NF VALUES ('S1', 'Arun');
INSERT INTO Student_2NF VALUES ('S2', 'Bala');

INSERT INTO Course_Faculty_2NF
VALUES ('DBMS', 'Ravi', '9990001', 'CSE', 'Dr. Sharma');

INSERT INTO Course_Faculty_2NF
VALUES ('OS', 'Meena', '9990002', 'CSE', 'Dr. Sharma');

COMMIT;

-- Display student details
SELECT * FROM Student_2NF;

-- Expected Output:
-- SID  SNAME
-- S1   Arun
-- S2   Bala

-- Display course and faculty details
SELECT * FROM Course_Faculty_2NF;

-- Expected Output:
-- COURSE  FACULTY  FACULTYPHONE  DEPT  HOD
-- DBMS    Ravi     9990001       CSE   Dr. Sharma
-- OS      Meena    9990002       CSE   Dr. Sharma


-- ============================================================
-- 3. THIRD NORMAL FORM (3NF)
-- Remove transitive dependencies.
-- ============================================================

CREATE TABLE Department (
    Dept VARCHAR2(10) PRIMARY KEY,
    HOD  VARCHAR2(30)
);

CREATE TABLE Faculty_Dept (
    Faculty      VARCHAR2(30) PRIMARY KEY,
    FacultyPhone VARCHAR2(15),
    Dept         VARCHAR2(10),
    CONSTRAINT fk_faculty_dept
        FOREIGN KEY (Dept) REFERENCES Department(Dept)
);

CREATE TABLE Course_3NF (
    Course  VARCHAR2(20) PRIMARY KEY,
    Faculty VARCHAR2(30),
    CONSTRAINT fk_course_faculty
        FOREIGN KEY (Faculty) REFERENCES Faculty_Dept(Faculty)
);

INSERT INTO Department VALUES ('CSE', 'Dr. Sharma');

INSERT INTO Faculty_Dept
VALUES ('Ravi', '9990001', 'CSE');

INSERT INTO Faculty_Dept
VALUES ('Meena', '9990002', 'CSE');

INSERT INTO Course_3NF VALUES ('DBMS', 'Ravi');
INSERT INTO Course_3NF VALUES ('OS', 'Meena');

COMMIT;

-- Display normalized tables
SELECT * FROM Department;
SELECT * FROM Faculty_Dept;
SELECT * FROM Course_3NF;

-- Verify the relationship using JOIN
SELECT c.Course, f.Faculty, f.FacultyPhone, f.Dept, d.HOD
FROM Course_3NF c
JOIN Faculty_Dept f ON c.Faculty = f.Faculty
JOIN Department d ON f.Dept = d.Dept;

-- Expected Output:
-- COURSE  FACULTY  FACULTYPHONE  DEPT  HOD
-- DBMS    Ravi     9990001       CSE   Dr. Sharma
-- OS      Meena    9990002       CSE   Dr. Sharma


-- ============================================================
-- 4. FOURTH NORMAL FORM (4NF)
-- Separate independent multivalued dependencies.
-- ============================================================

CREATE TABLE Faculty_Course (
    Faculty VARCHAR2(30),
    Course  VARCHAR2(20),
    PRIMARY KEY (Faculty, Course)
);

CREATE TABLE Faculty_Language (
    Faculty  VARCHAR2(30),
    Language VARCHAR2(20),
    PRIMARY KEY (Faculty, Language)
);

INSERT INTO Faculty_Course VALUES ('Ravi', 'DBMS');
INSERT INTO Faculty_Course VALUES ('Ravi', 'OS');

INSERT INTO Faculty_Language VALUES ('Ravi', 'English');
INSERT INTO Faculty_Language VALUES ('Ravi', 'Hindi');

COMMIT;

-- Display faculty courses
SELECT * FROM Faculty_Course;

-- Expected Output:
-- FACULTY  COURSE
-- Ravi     DBMS
-- Ravi     OS

-- Display faculty languages
SELECT * FROM Faculty_Language;

-- Expected Output:
-- FACULTY  LANGUAGE
-- Ravi     English
-- Ravi     Hindi


-- ============================================================
-- 5. FIFTH NORMAL FORM (5NF)
-- Decompose relations and verify reconstruction using JOIN.
-- ============================================================

CREATE TABLE Faculty_Course_5NF (
    Faculty VARCHAR2(30),
    Course  VARCHAR2(20),
    PRIMARY KEY (Faculty, Course)
);

CREATE TABLE Course_Textbook_5NF (
    Course   VARCHAR2(20),
    Textbook VARCHAR2(30),
    PRIMARY KEY (Course, Textbook)
);

CREATE TABLE Faculty_Textbook_5NF (
    Faculty  VARCHAR2(30),
    Textbook VARCHAR2(30),
    PRIMARY KEY (Faculty, Textbook)
);

INSERT INTO Faculty_Course_5NF
VALUES ('Ravi', 'DBMS');

INSERT INTO Faculty_Course_5NF
VALUES ('Meena', 'OS');

INSERT INTO Course_Textbook_5NF
VALUES ('DBMS', 'Korth');

INSERT INTO Course_Textbook_5NF
VALUES ('DBMS', 'Navathe');

INSERT INTO Course_Textbook_5NF
VALUES ('OS', 'Silberschatz');

INSERT INTO Faculty_Textbook_5NF
VALUES ('Ravi', 'Korth');

INSERT INTO Faculty_Textbook_5NF
VALUES ('Ravi', 'Navathe');

INSERT INTO Faculty_Textbook_5NF
VALUES ('Meena', 'Silberschatz');

COMMIT;

-- Display the three decomposed tables
SELECT * FROM Faculty_Course_5NF;
SELECT * FROM Course_Textbook_5NF;
SELECT * FROM Faculty_Textbook_5NF;

-- Reconstruct the original relation using a 3-way JOIN
SELECT fc.Faculty, fc.Course, ct.Textbook
FROM Faculty_Course_5NF fc
JOIN Course_Textbook_5NF ct
    ON fc.Course = ct.Course
JOIN Faculty_Textbook_5NF ft
    ON fc.Faculty = ft.Faculty
   AND ct.Textbook = ft.Textbook;

-- Expected Output:
-- FACULTY  COURSE  TEXTBOOK
-- Ravi     DBMS    Korth
-- Ravi     DBMS    Navathe
-- Meena    OS      Silberschatz


-- ============================================================
-- 6. VERIFYING NORMALIZATION IN ORACLE
-- ============================================================

-- Display tables in the current schema
SELECT table_name
FROM user_tables
ORDER BY table_name;

-- View the structure of the Faculty_Dept table
DESC Faculty_Dept;

-- Display primary-key and foreign-key constraints
SELECT constraint_name, constraint_type, table_name
FROM user_constraints
WHERE table_name IN
    ('STUDENT', 'COURSE_3NF', 'FACULTY_DEPT', 'DEPARTMENT')
ORDER BY table_name;

-- Display primary-key and foreign-key columns
SELECT a.table_name, a.column_name, c.constraint_type
FROM user_cons_columns a
JOIN user_constraints c
    ON a.constraint_name = c.constraint_name
WHERE c.constraint_type IN ('P', 'R')
ORDER BY a.table_name, a.column_name;


-- ============================================================
-- RESULT
-- The given relation was decomposed into 1NF, 2NF, 3NF,
-- 4NF and 5NF using functional dependency analysis.
-- The normalized tables were created, populated and verified.
-- ============================================================