/*
Program: Fibonacci Series using Iterative and Recursive Methods
Language: C

Aim:
----
To generate and display the Fibonacci series up to n terms 
using both iterative and recursive approaches.

Algorithm:
----------
1. Start the program.
2. Input the number of terms (n).
3. Iterative Method:
      a. Initialize first = 0, second = 1.
      b. For i from 0 to n-1:
            - If i <= 1, next = i.
            - Else:
                  next = first + second
                  first = second
                  second = next
            - Print next.
4. Recursive Method:
      a. Define function fibonacci(n):
            - If n == 0 → return 0.
            - If n == 1 → return 1.
            - Else → return fibonacci(n-1) + fibonacci(n-2).
      b. For i from 0 to n-1:
            - Call fibonacci(i) and print result.
5. Display both series.
6. Stop the program.

Description:
------------
- The Fibonacci sequence is a series where each number is the sum 
  of the two preceding numbers.
- Sequence: 0, 1, 1, 2, 3, 5, 8, ...
- Iterative approach is efficient (O(n)).
- Recursive approach is simple but less efficient (O(2^n)).

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

/*
Function: fibonacci
-------------------
Returns the nth Fibonacci number using recursion.

Parameter:
n - position in the Fibonacci sequence
*/
int fibonacci(int n)
{
    /* Base case */
    if (n == 0)
        return 0;

    /* Base case */
    if (n == 1)
        return 1;

    /* Recursive case */
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n, first = 0, second = 1, next, i;

    /* Input number of terms */
    printf("Enter the number of terms:\n");
    scanf("%d", &n);

    /* Iterative approach */
    printf("Fibonacci series using iterative:\n");
    for (i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            next = i;   // First two terms
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d  ", next);
    }

    /* Recursive approach */
    printf("\nUsing recursive:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", fibonacci(i));
    }

    return 0;
}