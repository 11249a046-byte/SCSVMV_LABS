
/*
AIM:
To find an approximate solution for the Vertex Cover problem
using a greedy 2-approximation algorithm.

ALGORITHM:
1. Initialize an array 'visited' to mark vertices included in the cover (all set to 0).
2. Traverse all pairs of vertices (u, v) in the adjacency matrix.
3. For every edge (u, v):
   a) If both vertices u and v are not visited:
      - Include both u and v in the vertex cover.
      - Mark visited[u] = 1 and visited[v] = 1.
4. Continue until all edges are covered.
5. Print all vertices marked as visited (these form the vertex cover).
6. Also print the total number of vertices in the cover.
*/

#include <stdio.h>

#define V 5 // Number of vertices in the graph

// Function to find approximate Vertex Cover
void findVertexCover(int graph[V][V])
{
    int visited[V]; // Array to store vertices included in cover

    // Initialize all vertices as unvisited (0)
    for (int i = 0; i < V; i++)
    {
        visited[i] = 0;
    }

    // Traverse all edges of the graph
    for (int u = 0; u < V; u++)
    {
        for (int v = 0; v < V; v++)
        {
            // If there is an edge and both vertices are not yet included
            if (graph[u][v] == 1 && !visited[u] && !visited[v])
            {
                // Include both vertices in vertex cover
                visited[u] = 1;
                visited[v] = 1;
            }
        }
    }

    // Print the vertex cover
    printf("Approximate Vertex Cover: ");
    int count = 0;

    for (int i = 0; i < V; i++)
    {
        if (visited[i])
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal vertices in the cover: %d\n", count);
}

int main()
{
    // Adjacency matrix representation of graph
    int graph[V][V] = {
        {0, 1, 0, 0, 0},
        {1, 0, 1, 1, 0},
        {0, 1, 0, 1, 1},
        {0, 1, 1, 0, 1},
        {0, 0, 1, 1, 0}
    };

    printf("Executing Vertex Cover Approximation...\n");
    findVertexCover(graph);

    return 0;
}