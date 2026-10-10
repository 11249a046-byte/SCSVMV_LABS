/*

# Experiment: Replacing a String Using the replace() Method

## Aim:

To write a Java program to replace a specified substring in a given string using the `replace()` method.

## Algorithm:

1. Start the program.
2. Import the `java.util` package.
3. Create a Scanner object to accept input from the user.
4. Read a string using the `nextLine()` method.
5. Read the substring to be replaced and the new substring.
6. Use the `replace()` method to replace the specified substring with the new substring.
7. Display the modified string.
8. Stop the program.

## Program:

*/

import java.util.*;

public class Replace
{
public static void main(String[] args)
{
// Declare variables
String a, e;


    // Create Scanner object to read input
    Scanner s = new Scanner(System.in);

    // Read the original string
    System.out.println("Enter a string:");
    String s1 = s.nextLine();

    // Read the substring to be replaced
    System.out.println("Enter the variable to be replaced:");
    a = s.next();

    // Read the replacement string
    System.out.println("Enter the new variable:");
    e = s.next();

    // Replace the specified substring
    String replaceString = s1.replace(a, e);

    // Display the modified string
    System.out.println("Modified string: " + replaceString);

    // Close Scanner
    s.close();
}


}

/*

## Sample Output:

Enter a string:
Java is easy to learn
Enter the variable to be replaced:
easy
Enter the new variable:
simple
Modified string: Java is simple to learn

## Result:

Thus, the Java program to replace a specified substring in a given string using the replace() method was implemented and executed successfully.
*/
