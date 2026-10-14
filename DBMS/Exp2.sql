-- ============================================================
-- EXPERIMENT 2: INSERTION, DELETION, UPDATING, ALTERING
-- AND VIEWING RECORDS BASED ON CONDITIONS
-- ============================================================


-- ============================================================
-- PART 1: CREATE EMPLOYEE TABLE
-- ============================================================

CREATE TABLE Employee (
    EmpID INT PRIMARY KEY,
    Name VARCHAR(50),
    Department VARCHAR(30),
    Salary DECIMAL(10,2),
    JoinDate DATE
);


-- ============================================================
-- PART 2: INSERT EMPLOYEE RECORDS
-- ============================================================

INSERT INTO Employee
(EmpID, Name, Department, Salary, JoinDate)
VALUES
(101, 'Anjali Sharma', 'IT', 45000.00, '2023-06-15');

INSERT INTO Employee
(EmpID, Name, Department, Salary, JoinDate)
VALUES
(102, 'Ravi Kumar', 'HR', 38000.00, '2022-03-10'),
(103, 'Priya Singh', 'Finance', 52000.00, '2021-11-01'),
(104, 'Karthik Iyer', 'IT', 47000.00, '2023-01-20');


-- ============================================================
-- PART 3: DISPLAY ALL EMPLOYEE RECORDS
-- ============================================================

SELECT * FROM Employee;

-- SAMPLE OUTPUT:
-- +-------+---------------+------------+----------+------------+
-- | EmpID | Name          | Department | Salary   | JoinDate   |
-- +-------+---------------+------------+----------+------------+
-- | 101   | Anjali Sharma | IT         | 45000.00 | 2023-06-15 |
-- | 102   | Ravi Kumar    | HR         | 38000.00 | 2022-03-10 |
-- | 103   | Priya Singh   | Finance    | 52000.00 | 2021-11-01 |
-- | 104   | Karthik Iyer  | IT         | 47000.00 | 2023-01-20 |
-- +-------+---------------+------------+----------+------------+


-- ============================================================
-- PART 4: DISPLAY EMPLOYEES FROM IT DEPARTMENT
-- ============================================================

SELECT * FROM Employee
WHERE Department = 'IT';

-- SAMPLE OUTPUT:
-- +-------+---------------+------------+----------+------------+
-- | EmpID | Name          | Department | Salary   | JoinDate   |
-- +-------+---------------+------------+----------+------------+
-- | 101   | Anjali Sharma | IT         | 45000.00 | 2023-06-15 |
-- | 104   | Karthik Iyer  | IT         | 47000.00 | 2023-01-20 |
-- +-------+---------------+------------+----------+------------+


-- ============================================================
-- PART 5: DISPLAY NAME AND SALARY ABOVE 40000
-- ============================================================

SELECT Name, Salary
FROM Employee
WHERE Salary > 40000;

-- SAMPLE OUTPUT:
-- +---------------+----------+
-- | Name          | Salary   |
-- +---------------+----------+
-- | Anjali Sharma | 45000.00 |
-- | Priya Singh   | 52000.00 |
-- | Karthik Iyer  | 47000.00 |
-- +---------------+----------+


-- ============================================================
-- PART 6: IT EMPLOYEES WITH SALARY >= 45000
-- ============================================================

SELECT * FROM Employee
WHERE Department = 'IT' AND Salary >= 45000;

-- SAMPLE OUTPUT:
-- +-------+---------------+------------+----------+------------+
-- | EmpID | Name          | Department | Salary   | JoinDate   |
-- +-------+---------------+------------+----------+------------+
-- | 101   | Anjali Sharma | IT         | 45000.00 | 2023-06-15 |
-- | 104   | Karthik Iyer  | IT         | 47000.00 | 2023-01-20 |
-- +-------+---------------+------------+----------+------------+


-- ============================================================
-- PART 7: SALARY BETWEEN 40000 AND 50000
-- ============================================================

SELECT * FROM Employee
WHERE Salary BETWEEN 40000 AND 50000;

-- SAMPLE OUTPUT:
-- +-------+---------------+------------+----------+------------+
-- | EmpID | Name          | Department | Salary   | JoinDate   |
-- +-------+---------------+------------+----------+------------+
-- | 101   | Anjali Sharma | IT         | 45000.00 | 2023-06-15 |
-- | 104   | Karthik Iyer  | IT         | 47000.00 | 2023-01-20 |
-- +-------+---------------+------------+----------+------------+


-- ============================================================
-- PART 8: EMPLOYEES IN IT OR FINANCE
-- ============================================================

SELECT * FROM Employee
WHERE Department IN ('IT', 'Finance');

-- SAMPLE OUTPUT:
-- +-------+---------------+------------+----------+------------+
-- | EmpID | Name          | Department | Salary   | JoinDate   |
-- +-------+---------------+------------+----------+------------+
-- | 101   | Anjali Sharma | IT         | 45000.00 | 2023-06-15 |
-- | 103   | Priya Singh   | Finance    | 52000.00 | 2021-11-01 |
-- | 104   | Karthik Iyer  | IT         | 47000.00 | 2023-01-20 |
-- +-------+---------------+------------+----------+------------+


-- ============================================================
-- PART 9: EMPLOYEE NAME STARTING WITH A
-- ============================================================

SELECT * FROM Employee
WHERE Name LIKE 'A%';

-- SAMPLE OUTPUT:
-- +-------+---------------+------------+----------+------------+
-- | EmpID | Name          | Department | Salary   | JoinDate   |
-- +-------+---------------+------------+----------+------------+
-- | 101   | Anjali Sharma | IT         | 45000.00 | 2023-06-15 |
-- +-------+---------------+------------+----------+------------+


-- ============================================================
-- PART 10: IT EMPLOYEES ORDERED BY SALARY DESCENDING
-- ============================================================

SELECT * FROM Employee
WHERE Department = 'IT'
ORDER BY Salary DESC;

-- SAMPLE OUTPUT:
-- +-------+---------------+------------+----------+------------+
-- | EmpID | Name          | Department | Salary   | JoinDate   |
-- +-------+---------------+------------+----------+------------+
-- | 104   | Karthik Iyer  | IT         | 47000.00 | 2023-01-20 |
-- | 101   | Anjali Sharma | IT         | 45000.00 | 2023-06-15 |
-- +-------+---------------+------------+----------+------------+


-- ============================================================
-- PART 11: UPDATE A SINGLE COLUMN
-- ============================================================

UPDATE Employee
SET Salary = 48000.00
WHERE EmpID = 101;

-- OUTPUT:
-- Query OK, 1 row affected.

SELECT * FROM Employee
WHERE EmpID = 101;

-- SAMPLE OUTPUT:
-- +-------+---------------+------------+----------+------------+
-- | EmpID | Name          | Department | Salary   | JoinDate   |
-- +-------+---------------+------------+----------+------------+
-- | 101   | Anjali Sharma | IT         | 48000.00 | 2023-06-15 |
-- +-------+---------------+------------+----------+------------+


-- ============================================================
-- PART 12: UPDATE MULTIPLE COLUMNS
-- ============================================================

UPDATE Employee
SET Salary = Salary + 2000,
    Department = 'Systems'
WHERE Department = 'IT';

-- OUTPUT:
-- Query OK, 2 rows affected.

SELECT * FROM Employee;

-- SAMPLE OUTPUT:
-- +-------+---------------+------------+----------+------------+
-- | EmpID | Name          | Department | Salary   | JoinDate   |
-- +-------+---------------+------------+----------+------------+
-- | 101   | Anjali Sharma | Systems    | 50000.00 | 2023-06-15 |
-- | 102   | Ravi Kumar    | HR         | 38000.00 | 2022-03-10 |
-- | 103   | Priya Singh   | Finance    | 52000.00 | 2021-11-01 |
-- | 104   | Karthik Iyer  | Systems    | 49000.00 | 2023-01-20 |
-- +-------+---------------+------------+----------+------------+


-- ============================================================
-- PART 13: DELETE A SPECIFIC RECORD
-- ============================================================

DELETE FROM Employee
WHERE EmpID = 102;

-- OUTPUT:
-- Query OK, 1 row affected.


-- ============================================================
-- PART 14: DELETE EMPLOYEES WITH SALARY BELOW 40000
-- ============================================================

-- Run this separately if you want to demonstrate this condition.
-- Ravi Kumar was already deleted in Part 13.

DELETE FROM Employee
WHERE Salary < 40000;

-- OUTPUT:
-- Query OK, 0 rows affected.


-- ============================================================
-- PART 15: DELETE ALL RECORDS
-- ============================================================

-- WARNING: This removes every record from Employee.
-- Run only when you want to empty the table.

-- DELETE FROM Employee;


-- ============================================================
-- PART 16: TRUNCATE TABLE
-- ============================================================

-- WARNING: This removes every record from Employee.
-- Run this instead of DELETE FROM Employee in Part 15.

-- TRUNCATE TABLE Employee;


-- ============================================================
-- PART 17: ADD A NEW COLUMN
-- ============================================================

ALTER TABLE Employee
ADD Email VARCHAR(100);

-- OUTPUT:
-- Query OK.


-- ============================================================
-- PART 18: MODIFY COLUMN SIZE (MYSQL SYNTAX)
-- ============================================================

ALTER TABLE Employee
MODIFY COLUMN Name VARCHAR(80);

-- OUTPUT:
-- Query OK.


-- ============================================================
-- PART 19: RENAME A COLUMN
-- ============================================================

ALTER TABLE Employee
RENAME COLUMN Email TO ContactEmail;

-- OUTPUT:
-- Query OK.


-- ============================================================
-- PART 20: DROP A COLUMN
-- ============================================================

ALTER TABLE Employee
DROP COLUMN ContactEmail;

-- OUTPUT:
-- Query OK.


-- ============================================================
-- PART 21: RENAME THE TABLE
-- ============================================================

ALTER TABLE Employee
RENAME TO Staff;

-- OUTPUT:
-- Query OK.


-- ============================================================
-- RESULT
-- ============================================================

-- Insertion, deletion, updating, altering and viewing records
-- based on conditions were demonstrated successfully.