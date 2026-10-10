/*

# Experiment: Checking Whether a Year Is a Leap Year

## Aim:

To write a Java program to check whether a given year is a leap year or not.

## Algorithm:

1. Start the program.
2. Import the Scanner class to accept input from the user.
3. Read the year from the user.
4. Initialize the boolean variable `leap` to `false`.
5. Check whether the year is divisible by 400. If true, set `leap` to `true`.
6. Otherwise, check whether the year is divisible by 100. If true, set `leap` to `false`.
7. Otherwise, check whether the year is divisible by 4. If true, set `leap` to `true`.
8. If `leap` is true, display that the year is a leap year; otherwise, display that it is not a leap year.
9. Stop the program.

## Program:

*/

import java.util.Scanner;

public class leapyear
{
public static void main(String[] args)
{
// Create Scanner object to read input
Scanner sc = new Scanner(System.in);

    // Read the year
    System.out.println("Enter the year:");
    int year = sc.nextInt();

    // Initialize leap year status
    boolean leap = false;

    // Check whether the year is a leap year
    if (year % 400 == 0)
        leap = true;
    else if (year % 100 == 0)
        leap = false;
    else if (year % 4 == 0)
        leap = true;

    // Display the result
    if (leap)
        System.out.println(year + " is a leap year");
    else
        System.out.println(year + " is not a leap year");

    // Close Scanner
    sc.close();
}


}

/*

## Sample Output:

Enter the year:
2024
2024 is a leap year

## Result:

Thus, the Java program to check whether a given year is a leap year or not was implemented and executed successfully.
*/
