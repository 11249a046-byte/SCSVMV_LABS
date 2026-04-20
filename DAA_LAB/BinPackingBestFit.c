/*
Program: Best Fit Algorithm (Bin Packing)
Language: C

Aim:
----
To implement the Best Fit algorithm for the Bin Packing problem 
and determine the minimum number of bins required by placing each item 
in the bin that leaves the least remaining space.

Algorithm:
----------
1. Start the program.
2. Input number of items (n).
3. Input sizes of all items.
4. Input bin capacity.
5. Initialize bins with full capacity.
6. For each item:
      a. Search all existing bins.
      b. Find the bin where:
            - Item fits AND
            - Remaining space after placing item is minimum.
      c. If such a bin is found:
            - Place item in that bin.
      d. Else:
            - Create a new bin and place item.
7. Repeat for all items.
8. Display total number of bins used.
9. Stop the program.

Description:
------------
- Best Fit is a greedy algorithm used in Bin Packing.
- It places each item in the bin that leaves the least leftover space.
- This reduces wastage compared to First Fit in many cases.
- Time Complexity: O(n^2)

*/

#include <stdio.h>

int i, j;

/*
Function: bestFit
-----------------
Implements Best Fit Bin Packing Algorithm.

Parameters:
items[]  - array of item sizes
n        - number of items
capacity - capacity of each bin
*/
void bestFit(int items[], int n, int capacity)
{
    printf("\nBest Fit Algorithm\n");

    int bin[n];        // Stores remaining capacity of bins
    int binCount = 0;  // Number of bins used

    /* Initialize all bins with full capacity */
    for (i = 0; i < n; i++)
        bin[i] = capacity;

    /* Process each item */
    for (i = 0; i < n; i++)
    {
        int bestIndex = -1;
        int minSpace = capacity + 1;

        /* Find the best bin for current item */
        for (j = 0; j < binCount; j++)
        {
            if (bin[j] >= items[i] && (bin[j] - items[i]) < minSpace)
            {
                bestIndex = j;
                minSpace = bin[j] - items[i];
            }
        }

        /* If suitable bin found */
        if (bestIndex != -1)
        {
            bin[bestIndex] -= items[i];
            printf("Item %d placed in Bin %d\n", i+1, bestIndex + 1);
        }
        else
        {
            /* Create new bin */
            bin[binCount] = capacity - items[i];
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

    /* Call Best Fit function */
    bestFit(items, n, capacity);

    return 0;
}