/*
Aim: Fibonacci Series using Iterative and Recursive Methods
Description:
- This program prints the Fibonacci series using:
  1) Iterative approach
  2) Recursive function

Sample Output:
---------------
Enter the number of terms:
7
Fibonacci series using iterative:
0  1  1  2  3  5  8
Using recursive:
0  1  1  2  3  5  8
*/

#include <stdio.h>

/* Recursive function to find Fibonacci number */
int fibonacci(int n)
{
    if (n == 0)
        return 0;           // Base case
    if (n == 1)
        return 1;           // Base case
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}

int main()
{
    int n, first = 0, second = 1, next, i;

    /* Read number of terms */
    printf("Enter the number of terms:\n");
    scanf("%d", &n);

    /* Fibonacci using iterative method */
    printf("Fibonacci series using iterative:\n");
    for (i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            next = i;       // First two Fibonacci numbers
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d  ", next);
    }

    /* Fibonacci using recursive method */
    printf("\nUsing recursive:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", fibonacci(i));
    }

    return 0;
}
