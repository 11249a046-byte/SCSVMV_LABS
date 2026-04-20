/*
Program: First Fit Algorithm (Bin Packing)
Language: C

Aim:
----
To implement the First Fit algorithm for the Bin Packing problem 
and determine the minimum number of bins required to store all items.

Algorithm:
----------
1. Start the program.
2. Input number of items (n).
3. Input sizes of all items.
4. Input bin capacity.
5. Initialize all bins as empty.
6. For each item:
      a. If item size > bin capacity:
            - Print that item cannot be placed.
      b. Else:
            - Check each existing bin:
                  • If item fits, place it and update remaining space.
                  • Mark item as placed.
      c. If not placed in any bin:
            - Create a new bin.
            - Place item in the new bin.
7. Repeat until all items are processed.
8. Display total number of bins used.
9. Stop the program.

Description:
------------
- First Fit is a greedy algorithm used in Bin Packing problems.
- Each item is placed in the first bin that has enough space.
- If no bin fits, a new bin is created.
- Time Complexity: O(n^2)

*/

#include <stdio.h>

int i, j;

/*
Function: firstFit
------------------
Implements First Fit Bin Packing Algorithm.

Parameters:
items[]  - array of item sizes
n        - number of items
capacity - capacity of each bin
*/
void firstFit(int items[], int n, int capacity)
{
    int bin[n];        // Array to store remaining capacity of bins
    int binCount = 0;  // Number of bins used

    printf("\nExecuting First Fit Algorithm\n");

    /* Initialize all bins to 0 */
    for (i = 0; i < n; i++)
        bin[i] = 0;

    /* Process each item */
    for (i = 0; i < n; i++)
    {
        /* If item cannot fit in any bin */
        if(items[i] > capacity) {
            printf("Item %d with size %d cannot be placed in any bin\n", i + 1, items[i]);
            continue;
        }

        int placed = 0;

        /* Try to place item in existing bins */
        for (j = 0; j < binCount; j++)
        {
            if (bin[j] >= items[i])
            {
                bin[j] -= items[i]; 
                printf("Item %d placed in Bin %d\n", i+1, j + 1);
                placed = 1;
                break;              
            }
        }

        /* If not placed, create a new bin */
        if (!placed)
        {
            bin[binCount] = capacity; 
            bin[binCount] -= items[i];
            printf("Item %d placed in Bin %d\n", i+1, binCount + 1);
            binCount++;
        }
    }

    /* Display total bins used */
    printf("Total bins used = %d\n", binCount);
}

int main()
{
    int n, capacity;

    /* Input number of items */
    printf("Enter number of items: ");
    scanf("%d", &n);

    int items[n];

    /* Input item sizes */
    printf("Enter item sizes:\n");
    for (i = 0; i < n; i++)
    {
        printf("Item %d: ", i + 1);
        scanf("%d", &items[i]);
    }

    /* Input bin capacity */
    printf("Enter bin capacity: ");
    scanf("%d", &capacity);

    /* Call First Fit function */
    firstFit(items, n, capacity);

    return 0;
}