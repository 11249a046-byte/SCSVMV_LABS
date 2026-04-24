
/*
AIM:
To implement Randomized Quick Sort to sort a list of elements.

ALGORITHM:
1. Read the number of elements and the array values.
2. Choose a random pivot element from the array.
3. Swap the randomly chosen pivot with the last element.
4. Partition the array such that:
   - Elements smaller than pivot are on the left.
   - Elements greater than pivot are on the right.
5. Recursively apply Quick Sort on left and right subarrays.
6. Repeat until the array is fully sorted.
7. Print the sorted array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function using last element as pivot
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Randomized Quick Sort function
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // Select random pivot and move it to end
        int randomIndex = low + rand() % (high - low + 1);
        swap(&arr[randomIndex], &arr[high]);

        // Partition the array
        int pi = partition(arr, low, high);

        // Recursively sort left and right parts
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int n;

    // Initialize random seed
    srand(time(NULL));

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int numbersToSort[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &numbersToSort[i]);

    // Call quick sort
    quickSort(numbersToSort, 0, n - 1);

    // Print sorted array
    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", numbersToSort[i]);

    return 0;
}