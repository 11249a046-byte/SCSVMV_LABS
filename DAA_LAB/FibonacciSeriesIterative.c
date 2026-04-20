/*
Program: Fibonacci Series using Iterative Method
Language: C

Aim:
----
To generate and display the Fibonacci series up to n terms 
using an iterative approach.

Algorithm:
----------
1. Start the program.
2. Input the number of terms (n).
3. Initialize:
      - first = 0
      - second = 1
4. For i from 0 to n-1:
      a. If i <= 1:
            - next = i
      b. Else:
            - next = first + second
            - first = second
            - second = next
      c. Print next value.
5. Display the Fibonacci series.
6. Stop the program.

Description:
------------
- The Fibonacci sequence is a series where each number is the sum 
  of the two previous numbers.
- Sequence: 0, 1, 1, 2, 3, 5, 8, ...
- This program uses an iterative method, which is efficient.
- Time Complexity: O(n)

*/

#include<stdio.h>

int main()
{
    int n, first = 0, second = 1, next, i;

    /* Input number of terms */
    printf("Enter the number of terms:\n");
    scanf("%d", &n);

    /* Display Fibonacci series using iteration */
    printf("Fibonacci series using iterative:\n");

    for (i = 0; i < n; i++)
    {
        /* First two numbers */
        if (i <= 1)
        {
            next = i;
        }
        else
        {
            /* Generate next term */
            next = first + second;
            first = second;
            second = next;
        }

        /* Print current term */
        printf("%d  ", next);
    }

    printf("\n");

    return 0;
}