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
    int i,n;
    printf("Enter the number of terms:\n");
    scanf("%d", &n);
     printf("\nUsing recursive:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", fibonacci(i));
    }
     printf("\n");
    return 0;
}
