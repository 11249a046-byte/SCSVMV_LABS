/*

# Experiment: Multiplication Table

## Aim:

To write a Java program to print the multiplication table of a given positive integer using a for loop.

## Algorithm:

1. Start the program.
2. Import the Scanner class to accept input from the user.
3. Read a positive integer `n`.
4. Initialize the loop variable `i` to 1.
5. Use a `for` loop to repeat from 1 to 10.
6. Multiply `n` by `i`.
7. Display the multiplication expression and its result.
8. Repeat until `i` reaches 10.
9. Stop the program.

## Program:

*/

import java.util.Scanner;

public class MulTable
{
public static void main(String[] args)
{
// Create Scanner object to read input
Scanner s = new Scanner(System.in);


    // Read a positive integer
    System.out.println("Enter a positive integer:");
    int n = s.nextInt();

    // Print the multiplication table from 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        // Display the multiplication result
        System.out.println(n + " X " + i + " = " + (n * i));
    }

    // Close Scanner
    s.close();
}


}

/*

## Sample Output:

Enter a positive integer:
5
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
5 X 8 = 40
5 X 9 = 45
5 X 10 = 50

## Result:

Thus, the Java program to print the multiplication table of a given positive integer using a for loop was implemented and executed successfully.
*/
