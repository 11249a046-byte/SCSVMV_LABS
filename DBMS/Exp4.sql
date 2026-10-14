-- ============================================================
-- EXPERIMENT 4: CREATE DATABASE TO SET VARIOUS CONSTRAINTS
-- ============================================================


-- ============================================================
-- PART 1: CREATE DATABASE
-- ============================================================

CREATE DATABASE CollegeDB;

USE CollegeDB;


-- ============================================================
-- PART 2: CREATE DEPARTMENT TABLE
-- PRIMARY KEY, NOT NULL AND UNIQUE CONSTRAINTS
-- ============================================================

CREATE TABLE Department (
    dept_id INT PRIMARY KEY,
    dept_name VARCHAR(50) NOT NULL UNIQUE
);


-- ============================================================
-- PART 3: CREATE STUDENT TABLE
-- PRIMARY KEY, NOT NULL, CHECK, UNIQUE, DEFAULT,
-- AND FOREIGN KEY CONSTRAINTS
-- ============================================================

CREATE TABLE Student (
    roll_no INT PRIMARY KEY,
    name VARCHAR(50) NOT NULL,
    age INT CHECK (age >= 17 AND age <= 30),
    email VARCHAR(50) UNIQUE,
    gender VARCHAR(10) DEFAULT 'Not Specified',
    dept_id INT,
    FOREIGN KEY (dept_id) REFERENCES Department(dept_id)
);


-- ============================================================
-- PART 4: INSERT RECORDS INTO DEPARTMENT TABLE
-- ============================================================

INSERT INTO Department
VALUES (1, 'Computer Science');

INSERT INTO Department
VALUES (2, 'Electronics');

-- SAMPLE OUTPUT:
-- Query OK, 1 row affected.


-- ============================================================
-- PART 5: INSERT VALID RECORDS INTO STUDENT TABLE
-- ============================================================

INSERT INTO Student
(roll_no, name, age, email, gender, dept_id)
VALUES
(101, 'Arun', 20, 'arun@email.com', 'Male', 1);

INSERT INTO Student
(roll_no, name, age, email, dept_id)
VALUES
(102, 'Priya', 21, 'priya@email.com', 2);

-- SAMPLE OUTPUT:
-- Query OK, 1 row affected.


-- ============================================================
-- PART 6: DISPLAY DEPARTMENT RECORDS
-- ============================================================

SELECT * FROM Department;

-- SAMPLE OUTPUT:
-- +---------+------------------+
-- | dept_id | dept_name        |
-- +---------+------------------+
-- | 1       | Computer Science |
-- | 2       | Electronics      |
-- +---------+------------------+


-- ============================================================
-- PART 7: DISPLAY STUDENT RECORDS
-- ============================================================

SELECT * FROM Student;

-- SAMPLE OUTPUT:
-- +---------+-------+-----+-----------------+---------------+---------+
-- | roll_no | name  | age | email           | gender        | dept_id |
-- +---------+-------+-----+-----------------+---------------+---------+
-- | 101     | Arun  | 20  | arun@email.com  | Male          | 1       |
-- | 102     | Priya | 21  | priya@email.com | Not Specified | 2       |
-- +---------+-------+-----+-----------------+---------------+---------+


-- ============================================================
-- PART 8: NOT NULL CONSTRAINT VIOLATION
-- The following statement must fail.
-- Uncomment and execute it separately to test the constraint.
-- ============================================================

-- INSERT INTO Student
-- (roll_no, name, age, email, dept_id)
-- VALUES
-- (103, NULL, 22, 'test1@email.com', 1);

-- EXPECTED ERROR:
-- Column 'name' cannot be null


-- ============================================================
-- PART 9: UNIQUE CONSTRAINT VIOLATION
-- Duplicate email address
-- ============================================================

-- INSERT INTO Student
-- (roll_no, name, age, email, dept_id)
-- VALUES
-- (104, 'Kumar', 23, 'arun@email.com', 1);

-- EXPECTED ERROR:
-- Duplicate entry 'arun@email.com' for key 'email'


-- ============================================================
-- PART 10: PRIMARY KEY CONSTRAINT VIOLATION
-- Duplicate roll number
-- ============================================================

-- INSERT INTO Student
-- (roll_no, name, age, email, dept_id)
-- VALUES
-- (101, 'Ravi', 22, 'ravi@email.com', 1);

-- EXPECTED ERROR:
-- Duplicate entry '101' for key 'PRIMARY'


-- ============================================================
-- PART 11: CHECK CONSTRAINT VIOLATION
-- Age must be between 17 and 30
-- ============================================================

-- INSERT INTO Student
-- (roll_no, name, age, email, dept_id)
-- VALUES
-- (105, 'Sita', 35, 'sita@email.com', 1);

-- EXPECTED ERROR:
-- Check constraint is violated


-- ============================================================
-- PART 12: FOREIGN KEY CONSTRAINT VIOLATION
-- Department ID 9 does not exist
-- ============================================================

-- INSERT INTO Student
-- (roll_no, name, age, email, dept_id)
-- VALUES
-- (106, 'Meena', 20, 'meena@email.com', 9);

-- EXPECTED ERROR:
-- Cannot add or update a child row:
-- a foreign key constraint fails


-- ============================================================
-- PART 13: ADD A CHECK CONSTRAINT
-- ============================================================

ALTER TABLE Student
ADD CONSTRAINT chk_name CHECK (LENGTH(name) >= 3);

-- SAMPLE OUTPUT:
-- Query OK.


-- ============================================================
-- PART 14: DROP THE CHECK CONSTRAINT
-- MySQL syntax
-- ============================================================

ALTER TABLE Student
DROP CHECK chk_name;

-- SAMPLE OUTPUT:
-- Query OK.


-- ============================================================
-- PART 15: VIEW STUDENT TABLE STRUCTURE
-- ============================================================

DESC Student;

-- SAMPLE OUTPUT:
-- +---------+-------------+------+-----+---------------+-------+
-- | Field   | Type        | Null | Key | Default       | Extra |
-- +---------+-------------+------+-----+---------------+-------+
-- | roll_no | int         | NO   | PRI | NULL          |       |
-- | name    | varchar(50) | NO   |     | NULL          |       |
-- | age     | int         | YES  |     | NULL          |       |
-- | email   | varchar(50) | YES  | UNI | NULL          |       |
-- | gender  | varchar(10) | YES  |     | Not Specified |       |
-- | dept_id | int         | YES  | MUL | NULL          |       |
-- +---------+-------------+------+-----+---------------+-------+


-- ============================================================
-- PART 16: FINAL STUDENT RECORDS
-- ============================================================

SELECT * FROM Student;

-- SAMPLE OUTPUT:
-- +---------+-------+-----+-----------------+---------------+---------+
-- | roll_no | name  | age | email           | gender        | dept_id |
-- +---------+-------+-----+-----------------+---------------+---------+
-- | 101     | Arun  | 20  | arun@email.com  | Male          | 1       |
-- | 102     | Priya | 21  | priya@email.com | Not Specified | 2       |
-- +---------+-------+-----+-----------------+---------------+---------+


-- ============================================================
-- RESULT
-- ============================================================
-- PRIMARY KEY, NOT NULL, UNIQUE, CHECK, DEFAULT and
-- FOREIGN KEY constraints were implemented and verified.
-- Constraint violations were tested.
-- A CHECK constraint was added and dropped using ALTER TABLE.