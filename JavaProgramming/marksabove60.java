/*

# Experiment: Displaying Students Scoring 60 or Above

## Aim:

To write a Java program to read the names and marks of six students and display the students who scored 60 or above.

## Algorithm:

1. Start the program.
2. Import the Scanner class to accept input from the user.
3. Declare a string array to store six student names.
4. Declare an integer array to store six students' marks.
5. Use a `for` loop to read each student's name and marks.
6. Traverse the arrays using another `for` loop.
7. Check whether each student's marks are greater than or equal to 60.
8. If the condition is true, display the student's name and marks.
9. Stop the program.

## Program:

*/

import java.util.Scanner;

public class marksabove60
{
public static void main(String[] args)
{
// Create Scanner object to read input
Scanner sc = new Scanner(System.in);


    // Declare arrays to store names and marks
    String[] name = new String[6];
    int[] marks = new int[6];

    // Read names and marks of six students
    for (int i = 0; i < 6; i++)
    {
        // Read student name
        System.out.println("Enter student name:");
        name[i] = sc.next();

        // Read student marks
        System.out.println("Enter marks:");
        marks[i] = sc.nextInt();
    }

    // Display students scoring 60 or above
    System.out.println("Students scoring above 60:");

    for (int i = 0; i < 6; i++)
    {
        // Check whether marks are at least 60
        if (marks[i] >= 60)
        {
            // Display student name and marks
            System.out.println(name[i] + " - " + marks[i]);
        }
    }

    // Close Scanner
    sc.close();
}


}

/*

## Sample Output:

Enter student name:
Ravi
Enter marks:
85
Enter student name:
Sita
Enter marks:
55
Enter student name:
Arun
Enter marks:
60
Enter student name:
Priya
Enter marks:
45
Enter student name:
Kiran
Enter marks:
75
Enter student name:
Rani
Enter marks:
50
Students scoring above 60:
Ravi - 85
Arun - 60
Kiran - 75

## Result:

Thus, the Java program to read the names and marks of six students and display those who scored 60 or above was implemented and executed successfully.
*/
