#include <stdio.h>
int i,j;
void bestFit(int items[], int n, int capacity)
{
    printf("\nBest Fit Algorithm\n");
    int bin[n];
    int binCount = 0;
    for (i = 0; i < n; i++)
        bin[i] = capacity;
    for (i = 0; i < n; i++)
    {
        int bestIndex = -1;
        int minSpace = capacity + 1;
        for (j = 0; j < binCount; j++)
        {
            if (bin[j] >= items[i] && (bin[j] - items[i]) < minSpace)
            {
                bestIndex = j;
                minSpace = bin[j] - items[i];
            }
        }
        if (bestIndex != -1)
        {
            bin[bestIndex] -= items[i];
            printf("Item %d placed in Bin %d\n", i+1, bestIndex + 1);
        }
        else
        {
            bin[binCount]=capacity-items[i];
            printf("Item %d placed in Bin %d\n", i+1, binCount + 1);
            binCount++;
        }
    }
    printf("Total bins used = %d\n", binCount);
}
int main()
{
    int n, capacity;
    printf("Enter number of items: ");
    scanf("%d", &n);
    int items[n];
    printf("Enter item sizes:\n");
    for (i = 0; i < n; i++)
    {
        printf("Item %d: ", i + 1);
        scanf("%d", &items[i]);
    }
    printf("Enter bin capacity: ");
    scanf("%d", &capacity);   
    bestFit(items, n, capacity);
    return 0;
}