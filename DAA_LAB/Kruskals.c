/*
Program: Kruskal's Minimum Spanning Tree (MST)
Language: C

Aim:
----
To find the Minimum Spanning Tree (MST) of a given weighted graph 
using Kruskal's Algorithm and calculate the total minimum cost.

Algorithm:
----------
1. Start the program.
2. Define number of vertices (V) and edges (E).
3. Represent graph as a list of edges (u, v, w).
4. Sort all edges in increasing order of weight.
5. Initialize each vertex as its own parent (disjoint sets).
6. For each edge (u, v):
      a. Find the leader (parent) of u and v.
      b. If they belong to different sets:
            - Include the edge in MST.
            - Merge the sets.
      c. Else:
            - Ignore the edge (to avoid cycle).
7. Repeat until (V - 1) edges are selected.
8. Print selected edges and total cost.
9. Stop the program.

Description:
------------
- Kruskal's Algorithm is a greedy method for finding MST.
- It selects edges with the smallest weight first.
- Uses Disjoint Set (Union-Find) to detect cycles.
- Time Complexity: O(E log E) due to sorting.

*/

#include <stdio.h>

#define V 5   // Number of vertices
#define E 6   // Number of edges

int parent[V]; // Array to store parent of each vertex

/*
Function: findLeader
--------------------
Finds the representative (leader) of the set containing vertex v.

Parameter:
v - vertex
*/
int findLeader(int v)
{
    while (parent[v] != v)
        v = parent[v];
    return v;
}

/*
Function: mergeSets
-------------------
Merges two disjoint sets containing vertices u and v.

Parameters:
u, v - vertices
*/
void mergeSets(int u, int v)
{
    int a = findLeader(u);
    int b = findLeader(v);
    parent[a] = b; // Union operation
}

/*
Function: sortEdges
-------------------
Sorts edges in ascending order of weight using Bubble Sort.

Parameter:
edges[E][3] - edge list (u, v, weight)
*/
void sortEdges(int edges[E][3])
{
    for (int i = 0; i < E - 1; i++)
    {
        for (int j = 0; j < E - i - 1; j++)
        {
            if (edges[j][2] > edges[j + 1][2])
            {
                // Swap entire edge (u, v, w)
                for (int k = 0; k < 3; k++)
                {
                    int temp = edges[j][k];
                    edges[j][k] = edges[j + 1][k];
                    edges[j + 1][k] = temp;
                }
            }
        }
    }
}

/*
Function: kruskal
-----------------
Implements Kruskal's Algorithm to find MST.

Parameter:
edges[E][3] - edge list
*/
void kruskal(int edges[E][3])
{
    // Step 1: Sort edges by weight
    sortEdges(edges);

    // Step 2: Initialize disjoint sets
    for (int i = 0; i < V; i++)
        parent[i] = i;

    int count = 0; // Number of edges selected
    int cost = 0;  // Total cost of MST

    printf("Selected Edges:\n");

    // Step 3: Process edges
    for (int i = 0; i < E; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        int w = edges[i][2];

        // If adding edge does not form a cycle
        if (findLeader(u) != findLeader(v))
        {
            printf("%d -- %d (Weight: %d)\n", u, v, w);
            mergeSets(u, v);
            cost += w;
            count++;
        }

        // Stop when MST has (V-1) edges
        if (count == V - 1)
            break;
    }

    printf("Total Cost: %d\n", cost);
}

int main()
{
    // Edge list: {source, destination, weight}
    int edges[E][3] = {
        {0, 1, 2},
        {0, 2, 3},
        {1, 2, 5},
        {1, 3, 3},
        {2, 4, 4},
        {3, 4, 2}
    };

    // Call Kruskal's Algorithm
    kruskal(edges);

    return 0;
}