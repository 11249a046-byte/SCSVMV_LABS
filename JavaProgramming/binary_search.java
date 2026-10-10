/*

# Experiment: Binary Search

## Aim:

To write a Java program to search for a given element in a sorted array using the binary search technique.

## Algorithm:

1. Start the program.
2. Import the Scanner class to accept input from the user.
3. Read the number of elements `n`.
4. Declare an integer array of size `n`.
5. Read the elements in sorted order.
6. Read the element `x` to be searched.
7. Initialize `first = 0` and `last = n - 1`.
8. Repeat while `first <= last`:

   * Calculate the middle index using `mid = (first + last) / 2`.
   * If `a[mid] == x`, set `found = true` and stop searching.
   * If `a[mid] < x`, set `first = mid + 1`.
   * Otherwise, set `last = mid - 1`.
9. If `found` is true, display "Element found"; otherwise, display "Element not found".
10. Stop the program.

## Program:

*/

import java.util.Scanner;

public class binary_search
{
public static void main(String[] args)
{
// Declare variables
int first, last, mid, n, x, i;
boolean found = false;

    // Create Scanner object to read input
    Scanner sc = new Scanner(System.in);

    // Read the number of elements
    System.out.println("Enter the number of elements:");
    n = sc.nextInt();

    // Declare an array
    int[] a = new int[n];

    // Read the elements in sorted order
    System.out.println("Enter the sorted elements:");
    for (i = 0; i < n; i++)
    {
        a[i] = sc.nextInt();
    }

    // Read the element to search
    System.out.println("Enter the element to search:");
    x = sc.nextInt();

    // Initialize the search boundaries
    first = 0;
    last = n - 1;

    // Perform binary search
    while (first <= last)
    {
        // Find the middle index
        mid = (first + last) / 2;

        // Check whether the middle element matches
        if (a[mid] == x)
        {
            found = true;
            break;
        }
        // Search the right half
        else if (a[mid] < x)
        {
            first = mid + 1;
        }
        // Search the left half
        else
        {
            last = mid - 1;
        }
    }

    // Display the search result
    if (found)
    {
        System.out.println("Element found");
    }
    else
    {
        System.out.println("Element not found");
    }

    // Close Scanner
    sc.close();
}

}

/*

## Sample Output:

Enter the number of elements:
5
Enter the sorted elements:
10
20
30
40
50
Enter the element to search:
30
Element found

## Result:

Thus, the Java program to search for an element in a sorted array using binary search was implemented and executed successfully.
*/
