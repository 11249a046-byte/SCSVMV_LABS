/*
Program: Fibonacci Series using Recursion
Language: C

Aim:
----
To generate and display the Fibonacci series up to n terms 
using a recursive function.

Algorithm:
----------
1. Start the program.
2. Input the number of terms (n).
3. Define a recursive function fibonacci(n):
      a. If n == 0, return 0.
      b. If n == 1, return 1.
      c. Else return fibonacci(n-1) + fibonacci(n-2).
4. Use a loop from 0 to n-1:
      - Call fibonacci(i) and print the result.
5. Display the Fibonacci series.
6. Stop the program.

Description:
------------
- The Fibonacci sequence is a series where each number is the sum 
  of the two preceding ones.
- Sequence: 0, 1, 1, 2, 3, 5, 8, ...
- This program uses recursion to compute each term.
- Time Complexity: O(2^n) (inefficient for large n due to repeated calls)

*/

#include <stdio.h>

/*
Function: fibonacci
-------------------
Returns the nth Fibonacci number using recursion.

Parameter:
n - position in Fibonacci series
*/
int fibonacci(int n)
{
    /* Base case: first number */
    if (n == 0)
        return 0;

    /* Base case: second number */
    if (n == 1)
        return 1;

    /* Recursive case */
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int i, n;

    /* Input number of terms */
    printf("Enter the number of terms:\n");
    scanf("%d", &n);

    printf("\nUsing recursive:\n");

    /* Print Fibonacci series */
    for (i = 0; i < n; i++)
    {
        printf("%d  ", fibonacci(i));
    }

    printf("\n");

    return 0;
}