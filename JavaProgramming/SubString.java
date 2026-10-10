/*
Experiment: Printing All Substrings of a String

Aim:
To write a Java program to print all possible substrings of a given string and count the total number of substrings.

Algorithm:

1. Import the Scanner class.
2. Read a string from the user.
3. Find the length of the string.
4. Use an outer loop to select the starting position of each substring.
5. Use an inner loop to determine the length of each substring.
6. Extract each substring using the substring() method.
7. Display all the substrings.
8. Calculate and display the total number of substrings.
9. Stop the program.

Program:
*/

import java.util.Scanner;

public class SubString {


public static void main(String[] args) {

    String string, sub;
    int count = 0, i, c, length;

    Scanner in = new Scanner(System.in);

    System.out.println("Enter a string to print all the substrings:");
    string = in.nextLine();

    length = string.length();

    System.out.println("Substrings:");

    for (c = 0; c < length; c++) {

        for (i = 1; i <= length - c; i++) {

            sub = string.substring(c, c + i);
            System.out.println(sub);
            count++;
        }
    }

    System.out.println("Number of substrings present are: " + count);

    in.close();
}


}

/*
Sample Output:
Enter a string to print all the substrings:
ABC
Substrings:
A
AB
ABC
B
BC
C
Number of substrings present are: 6

Result:
Thus, the Java program to print all possible substrings of a given string and count them was executed successfully.
*/
