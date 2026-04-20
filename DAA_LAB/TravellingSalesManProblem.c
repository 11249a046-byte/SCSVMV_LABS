/*
Program: Travelling Salesman Problem (TSP) using Dynamic Programming
Language: C

Aim:
----
To find the minimum travelling cost for visiting all cities exactly once 
and returning to the starting city using Dynamic Programming with Bitmasking.

Algorithm:
----------
1. Start the program.
2. Input the number of cities (n).
3. Input the cost adjacency matrix d[n][n].
4. Initialize a DP table dp[i][S]:
      - i → current city
      - S → set of unvisited cities (bitmask)
5. Define a recursive function g(i, S):
      a. If all cities are visited (S == 0):
            return cost from current city back to starting city.
      b. If result already computed, return stored value.
      c. For every city k in set S:
            - Calculate cost = d[i][k] + g(k, remaining cities)
            - Store the minimum cost.
6. Use bitmasking to represent subsets of cities.
7. Start from city 0 and include all other cities in the set.
8. Print the minimum travelling cost.
9. Stop the program.

Description:
------------
- This program solves the Travelling Salesman Problem using DP + Bitmasking.
- It reduces time complexity compared to brute force.
- Each subset of cities is represented using binary masking.
- Time Complexity: O(n^2 * 2^n)

*/

#include<stdio.h>
#include<limits.h>

#define MAXN 15       // Maximum number of cities
#define INF INT_MAX   // Represents infinity

int n, k;
int d[MAXN][MAXN];       // Cost matrix
int dp[MAXN][1<<MAXN];   // DP table

/*
Function: g
-----------
Returns the minimum cost to visit all cities in set S starting from city i.

Parameters:
i - current city
S - set of remaining cities (bitmask)
*/
int g(int i,int S)
{
    /* Base Case: If no cities left, return cost to starting city */
	if(S==0)
	{
		return d[i][0];
	}

    /* If already computed, return stored value */
	if(dp[i][S]!=-1)
	{
		return dp[i][S];
	}

	int minCost=INF;

    /* Try visiting all cities in the set S */
	for(k=0;k<n;k++)
	{
		if(S&(1<<k))  // Check if city k is in set S
		{
			int cost=d[i][k]+g(k,S&~(1<<k));

			if(cost<minCost)
			{
				minCost=cost;
			}
		}
	}

    /* Store result in DP table */
	return dp[i][S]=minCost;
}

int main()
{
	int i,j,mask;

    /* Input number of cities */
	printf("Enter the number of cities:\n");
	scanf("%d",&n);

    /* Input cost matrix */
	printf("enter cost of the matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&d[i][j]);
		}
	}

    /* Initialize DP table with -1 */
	for(i=0;i<n;i++)
	{
		for(mask=0;mask<(1<<n);mask++)
		{
			dp[i][mask]=-1;
		}
	}

    /* Create bitmask for all cities except starting city (0) */
	int S = 0;
    for (i = 1; i < n; i++)
    {
    	S |= (1 << i);
	}

    /* Compute minimum travelling cost starting from city 0 */
    int result = g(0, S);

    /* Display the given cost matrix */
    printf("Given Cost Matrix\n");
    for (i = 0; i < n; i++)
    { 
        printf("|");
        for (j = 0; j < n; j++)
        {
        	printf(" %d ", d[i][j]);
		}
        printf("|\n");
    }

    /* Display the result */
    printf("Minimum travelling cost: %d\n", result);

    return 0;
}