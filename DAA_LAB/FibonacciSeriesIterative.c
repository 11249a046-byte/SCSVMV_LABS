#include<stdio.h>
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
    printf("\n");   
}