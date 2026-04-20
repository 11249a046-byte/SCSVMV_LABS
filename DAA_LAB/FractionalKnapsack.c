/*
Program: Fractional Knapsack Problem
Language: C

Aim:
----
To determine the maximum profit that can be obtained by selecting items 
based on their profit-to-weight ratio using the Greedy Method 
(Fractional Knapsack).

Algorithm:
----------
1. Start the program.
2. Input the number of items (n).
3. For each item:
      - Input profit and weight.
4. Input the capacity of the knapsack.
5. Compute profit/weight ratio for each item.
6. Sort items in descending order of ratio.
7. Initialize total profit = 0.
8. For each item:
      a. If the item can be fully included:
            - Add its profit to total profit.
            - Reduce capacity.
      b. Else:
            - Include fractional part of the item.
            - Add proportional profit.
            - Break the loop.
9. Display maximum profit.
10. Stop the program.

Description:
------------
- This program implements the Fractional Knapsack problem using a greedy approach.
- Items are selected based on the highest profit-to-weight ratio.
- Fractional parts of items can be taken.
- Time Complexity: O(n^2) due to sorting.

*/

#include<stdio.h>

int i, j;

/*
Structure: data
---------------
Stores details of each item:
profit - profit of item
weight - weight of item
avg - profit/weight ratio
*/
struct data
{
	int profit;
	int weight;
	float avg;
};

/*
Function: sort_items
--------------------
Sorts items in descending order of profit/weight ratio.

Parameters:
items[] - array of items
n - number of items
*/
void sort_items(struct data items[], int n)
{
	struct data temp;

	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(items[i].avg < items[j].avg)
			{
				temp = items[i];
				items[i] = items[j];
				items[j] = temp;
			}
		}
	}
}

int main()
{
	int n, capacity;

	/* Input number of items */
	printf("enter no.of items:\n");
	scanf("%d", &n);

	struct data items[n];

	/* Input profit and weight for each item */
	for(i = 0; i < n; i++)
	{
		printf("enter profit of %d and weight:\n", i + 1);
		scanf("%d %d", &items[i].profit, &items[i].weight);
	}

	/* Input knapsack capacity */
	printf("enter knapsack capacity:\n");
	scanf("%d", &capacity);

	/* Calculate profit/weight ratio */
	for(i = 0; i < n; i++)
	{
		items[i].avg = items[i].profit / items[i].weight;
	}

	/* Sort items based on ratio */
	sort_items(items, n);

	float totalvalue = 0.0;

	/* Select items using greedy approach */
	for(i = 0; i < n; i++)
	{
		/* If full item can be taken */
		if(capacity >= items[i].weight)
		{
			capacity -= items[i].weight;
			totalvalue += items[i].profit;
		}
		else
		{
			/* Take fractional part */
			totalvalue += items[i].avg * capacity;
			break;
		}
	}

	/* Display result */
	printf("maximum profit: %.2f", totalvalue);

	return 0;
}