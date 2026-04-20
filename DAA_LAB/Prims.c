/*
Program: Prim's Minimum Spanning Tree (MST)
Language: C

Aim:
----
To find the Minimum Spanning Tree (MST) of a given weighted graph 
using Prim's Algorithm and calculate the total minimum cost.

Algorithm:
----------
1. Start the program.
2. Define the number of vertices (V).
3. Represent the graph using an adjacency matrix.
4. Initialize:
      - key[] array with a large value (infinity)
      - visited[] array as false
      - parent[] array to store MST
5. Set the starting vertex (0):
      - key[0] = 0
      - parent[0] = -1
6. Repeat (V-1) times:
      a. Select the unvisited vertex with the minimum key value.
      b. Mark it as visited.
      c. For all adjacent vertices:
            - If there is an edge and vertex is not visited
            - Update key value if smaller weight is found
            - Update parent
7. Print the edges in MST using parent[].
8. Calculate and display total cost.
9. Stop the program.

Description:
------------
- Prim's Algorithm is a greedy method to find MST.
- It grows the MST by selecting the smallest edge connecting 
  a visited vertex to an unvisited vertex.
- The graph is represented using an adjacency matrix.
- Time Complexity: O(V^2)

*/

#include <stdio.h>
#include <stdlib.h>

#define V 5 // Number of vertices

/*
Function: minKey
----------------
Finds the vertex with the minimum key value that is not yet included in MST.

Parameters:
key[]     - Array storing minimum edge weights
visited[] - Array to track visited vertices
*/
int minKey(int key[], int visited[])
{
    int min = 999999;   // Initialize with large value
    int min_index = 0;  // Default index

    for (int i = 0; i < V; i++)
    {
        if (!visited[i] && key[i] < min)
        {
            min = key[i];
            min_index = i;
        }
    }
    return min_index;
}

/*
Function: printPrimMST
----------------------
Prints the edges of the Minimum Spanning Tree and total cost.

Parameters:
parent[] - Stores MST structure
graph[][] - Adjacency matrix
*/
void printPrimMST(int parent[], int graph[V][V])
{
    printf("\nPrim's MST:\n");
    printf("Edge \tWeight\n");

    int total = 0;

    for (int i = 1; i < V; i++)
    {
        printf("%d - %d \t%d\n", parent[i], i, graph[i][parent[i]]);
        total += graph[i][parent[i]];
    }

    printf("Total Cost = %d\n", total);
}

/*
Function: primMST
-----------------
Implements Prim's Algorithm to find MST.

Parameter:
graph[][] - Adjacency matrix representation of graph
*/
void primMST(int graph[V][V])
{
    int parent[V];   // Stores MST
    int key[V];      // Minimum edge weight for each vertex
    int visited[V];  // Tracks visited vertices

    // Step 1: Initialize all keys as infinite and visited as false
    for (int i = 0; i < V; i++)
    {
        key[i] = 999999;
        visited[i] = 0;
    }

    // Step 2: Start from vertex 0
    key[0] = 0;
    parent[0] = -1;

    // Step 3: Construct MST
    for (int count = 0; count < V - 1; count++)
    {
        // Select vertex with minimum key value
        int u = minKey(key, visited);
        visited[u] = 1;

        // Update key values of adjacent vertices
        for (int v = 0; v < V; v++)
        {
            // Check edge existence and update if smaller weight found
            if (graph[u][v] && !visited[v] && graph[u][v] < key[v])
            {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    // Print MST
    printPrimMST(parent, graph);
}

int main()
{
    // Adjacency matrix representation of graph
    int graph[V][V] = {
        {0, 2, 3, 0, 0},
        {2, 0, 5, 3, 0},
        {3, 5, 0, 0, 4},
        {0, 3, 0, 0, 2},
        {0, 0, 4, 2, 0}
    };

    // Call Prim's Algorithm
    primMST(graph);

    return 0;
}