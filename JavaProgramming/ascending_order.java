/*

# Experiment: Sorting Elements in Ascending Order

## Aim:

To write a Java program to sort a given set of integer elements in ascending order.

## Algorithm:

1. Start the program.
2. Import the Scanner class to accept input from the user.
3. Read the number of elements `n`.
4. Declare an integer array of size `n`.
5. Read the array elements from the user.
6. Compare each element with the remaining elements using nested `for` loops.
7. If `a[i]` is greater than `a[j]`, swap the elements using a temporary variable.
8. Repeat the process until all elements are sorted in ascending order.
9. Display the sorted elements.
10. Stop the program.

## Program:

*/

import java.util.Scanner;

public class ascending_order
{
public static void main(String[] args)
{
// Declare variables
int n, temp, i, j;

    // Create Scanner object to read input
    Scanner s = new Scanner(System.in);

    // Read the number of elements
    System.out.println("ENTER number of elements:");
    n = s.nextInt();

    // Declare an array
    int[] a = new int[n];

    // Read the array elements
    System.out.println("Enter the elements:");
    for (i = 0; i < n; i++)
    {
        a[i] = s.nextInt();
    }

    // Sort the elements in ascending order
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            // Compare and swap elements
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Display the sorted elements
    System.out.println("Ascending order:");
    for (i = 0; i < n; i++)
    {
        System.out.println(a[i]);
    }

    // Close Scanner
    s.close();
}

}

/*

## Sample Output:

ENTER number of elements:
5
Enter the elements:
45
12
89
23
7
Ascending order:
7
12
23
45
89

## Result:

Thus, the Java program to sort the given integer elements in ascending order was implemented and executed successfully.
*/
