/*

# Experiment: Finding the Sum, Largest and Smallest Elements in an Array

## Aim:

To write a Java program to calculate the sum of array elements and find the largest and smallest numbers in an array.

## Algorithm:

1. Start the program.
2. Declare and initialize an integer array with the given elements.
3. Initialize `sum` to 0.
4. Initialize `min` and `max` with the first element of the array.
5. Traverse the array using a `for` loop.
6. If the current element is greater than `max`, update `max`.
7. If the current element is smaller than `min`, update `min`.
8. Add each element to `sum`.
9. Display the sum, largest number, and smallest number.
10. Stop the program.

## Program:

*/

public class largestandsmallest
{
public static void main(String[] args)
{
// Initialize the array
int[] a = {23, 34, 13, 64, 72, 90, 10, 15, 9, 27};

    // Initialize variables
    int sum = 0;
    int min = a[0];
    int max = a[0];

    // Traverse the array
    for (int i = 0; i < a.length; i++)
    {
        // Find the largest number
        if (a[i] > max)
        {
            max = a[i];
        }

        // Find the smallest number
        if (a[i] < min)
        {
            min = a[i];
        }

        // Calculate the sum
        sum += a[i];
    }

    // Display the results
    System.out.println("Sum = " + sum);
    System.out.println("Largest number: " + max);
    System.out.println("Smallest number: " + min);
}


}

/*

## Sample Output:

Sum = 357
Largest number: 90
Smallest number: 9

## Result:

Thus, the Java program to calculate the sum of array elements and find the largest and smallest numbers was implemented and executed successfully.
*/
