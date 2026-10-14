-- ============================================================
-- EXPERIMENT 3: DCL AND TCL COMMANDS
-- ============================================================


-- ============================================================
-- PART 1: EMPLOYEE TABLE
-- ============================================================

CREATE TABLE Employee(
    EmpID INT PRIMARY KEY,
    Name VARCHAR(30),
    Department VARCHAR(20),
    Salary DECIMAL(10,2)
);

-- Insert Employee Records

INSERT INTO Employee VALUES (101,'Arun','HR',35000);
INSERT INTO Employee VALUES (102,'Priya','IT',45000);
INSERT INTO Employee VALUES (103,'Kavin','Finance',50000);
INSERT INTO Employee VALUES (104,'Divya','IT',55000);

-- Display Employee Records

SELECT * FROM Employee;

-- SAMPLE OUTPUT:
-- +-------+-------+------------+----------+
-- | EmpID | Name  | Department | Salary   |
-- +-------+-------+------------+----------+
-- | 101   | Arun  | HR         | 35000.00 |
-- | 102   | Priya | IT         | 45000.00 |
-- | 103   | Kavin | Finance    | 50000.00 |
-- | 104   | Divya | IT         | 55000.00 |
-- +-------+-------+------------+----------+


-- ============================================================
-- PART 2: DCL COMMANDS ON EMPLOYEE TABLE
-- ============================================================

-- Grant SELECT Permission

GRANT SELECT ON Employee TO user1;

-- Grant SELECT and INSERT Permissions

GRANT SELECT, INSERT ON Employee TO user1;

-- Revoke INSERT Permission

REVOKE INSERT ON Employee FROM user1;

-- Revoke All Permissions

REVOKE ALL PRIVILEGES ON Employee FROM user1;


-- ============================================================
-- PART 3: TCL COMMANDS ON EMPLOYEE TABLE
-- ============================================================

-- Disable Auto-Commit

SET AUTOCOMMIT=0;

-- Update Salary of Employee 102

UPDATE Employee
SET Salary=48000
WHERE EmpID=102;

-- Create Savepoint

SAVEPOINT SP1;

-- Update Salary of Employee 104

UPDATE Employee
SET Salary=60000
WHERE EmpID=104;

-- Roll Back to Savepoint

ROLLBACK TO SP1;

-- Commit the Transaction

COMMIT;

-- Display Employee Records After COMMIT

SELECT * FROM Employee;

-- SAMPLE OUTPUT:
-- +-------+-------+------------+----------+
-- | EmpID | Name  | Department | Salary   |
-- +-------+-------+------------+----------+
-- | 101   | Arun  | HR         | 35000.00 |
-- | 102   | Priya | IT         | 48000.00 |
-- | 103   | Kavin | Finance    | 50000.00 |
-- | 104   | Divya | IT         | 55000.00 |
-- +-------+-------+------------+----------+

-- Delete Employee 101

DELETE FROM Employee
WHERE EmpID=101;

-- Roll Back the Deletion

ROLLBACK;

-- Display Employee Records After ROLLBACK

SELECT * FROM Employee;

-- SAMPLE OUTPUT:
-- +-------+-------+------------+----------+
-- | EmpID | Name  | Department | Salary   |
-- +-------+-------+------------+----------+
-- | 101   | Arun  | HR         | 35000.00 |
-- | 102   | Priya | IT         | 48000.00 |
-- | 103   | Kavin | Finance    | 50000.00 |
-- | 104   | Divya | IT         | 55000.00 |
-- +-------+-------+------------+----------+


-- ============================================================
-- PART 4: BOOK TABLE
-- ============================================================

CREATE TABLE Book(
    BookID INT PRIMARY KEY,
    Title VARCHAR(50),
    Author VARCHAR(40),
    Category VARCHAR(30),
    Price DECIMAL(8,2)
);

-- Insert Book Records

INSERT INTO Book VALUES
(101,'Database System','Korth','Database',550),
(102,'C Programming','Dennis Ritchie','Programming',450),
(103,'Java Programming','Herbert Schildt','Programming',650),
(104,'Python Basics','Mark Lutz','Programming',700),
(105,'Computer Networks','Andrew Tanenbaum','Networking',600);

-- Display Book Records

SELECT * FROM Book;

-- SAMPLE OUTPUT:
-- +--------+-------------------+------------------+-------------+--------+
-- | BookID | Title             | Author           | Category    | Price  |
-- +--------+-------------------+------------------+-------------+--------+
-- | 101    | Database System   | Korth            | Database    | 550.00 |
-- | 102    | C Programming     | Dennis Ritchie   | Programming | 450.00 |
-- | 103    | Java Programming  | Herbert Schildt  | Programming | 650.00 |
-- | 104    | Python Basics     | Mark Lutz        | Programming | 700.00 |
-- | 105    | Computer Networks | Andrew Tanenbaum | Networking  | 600.00 |
-- +--------+-------------------+------------------+-------------+--------+


-- ============================================================
-- PART 5: DCL COMMANDS ON BOOK TABLE
-- ============================================================

-- Grant SELECT Permission

GRANT SELECT ON Book TO student1;

-- Grant INSERT and UPDATE Permissions

GRANT INSERT, UPDATE ON Book TO student1;

-- Revoke UPDATE Permission

REVOKE UPDATE ON Book FROM student1;

-- Revoke All Permissions

REVOKE ALL PRIVILEGES ON Book FROM student1;


-- ============================================================
-- PART 6: TCL COMMANDS ON BOOK TABLE
-- ============================================================

-- Update Programming Book Prices by 10 Percent

UPDATE Book
SET Price=Price*1.10
WHERE Category='Programming';

-- Display Book Records After UPDATE

SELECT * FROM Book;

-- SAMPLE OUTPUT:
-- +--------+-------------------+------------------+-------------+--------+
-- | BookID | Title             | Author           | Category    | Price  |
-- +--------+-------------------+------------------+-------------+--------+
-- | 101    | Database System   | Korth            | Database    | 550.00 |
-- | 102    | C Programming     | Dennis Ritchie   | Programming | 495.00 |
-- | 103    | Java Programming  | Herbert Schildt  | Programming | 715.00 |
-- | 104    | Python Basics     | Mark Lutz        | Programming | 770.00 |
-- | 105    | Computer Networks | Andrew Tanenbaum | Networking  | 600.00 |
-- +--------+-------------------+------------------+-------------+--------+

-- Create Savepoint

SAVEPOINT SP_Book;

-- Update Python Book Price

UPDATE Book
SET Price=800
WHERE BookID=104;

-- Roll Back to Savepoint

ROLLBACK TO SP_Book;

-- Delete Computer Networks Record

DELETE FROM Book
WHERE BookID=105;

-- Roll Back the Transaction

ROLLBACK;

-- Display Final Book Records

SELECT * FROM Book;

-- SAMPLE OUTPUT:
-- +--------+-------------------+------------------+-------------+--------+
-- | BookID | Title             | Author           | Category    | Price  |
-- +--------+-------------------+------------------+-------------+--------+
-- | 101    | Database System   | Korth            | Database    | 550.00 |
-- | 102    | C Programming     | Dennis Ritchie   | Programming | 450.00 |
-- | 103    | Java Programming  | Herbert Schildt  | Programming | 650.00 |
-- | 104    | Python Basics     | Mark Lutz        | Programming | 700.00 |
-- | 105    | Computer Networks | Andrew Tanenbaum | Networking  | 600.00 |
-- +--------+-------------------+------------------+-------------+--------+


