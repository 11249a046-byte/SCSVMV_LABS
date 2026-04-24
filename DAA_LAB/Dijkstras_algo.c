/*
AIM:
To implement Dijkstra’s Algorithm to find the shortest path
from a source vertex to all other vertices in a weighted graph.

ALGORITHM:
1. Initialize all vertices with distance = infinity and mark them unvisited.
2. Set distance of source vertex (0) as 0.
3. Repeat for all vertices:
   a) Select the unvisited vertex with minimum distance.
   b) Mark it as visited.
   c) For all adjacent vertices:
      - If there is an edge and vertex is not visited:
      - Update distance using relaxation:
        dist[j] = dist[u] + graph[u][j] if smaller.
4. Continue until all vertices are processed.
5. Print shortest distances from source.
*/
#include <stdio.h>

#define V 5
#define INF 999999
// Function to find the vertex with minimum distance
// from the set of unvisited vertices
int extractMin(int dist[], int visited[])
{
    int min = INF, min_index = -1;

    for (int v = 0; v < V; v++)
    {
        // Select the unvisited vertex with smallest distance
        if (!visited[v] && dist[v] <= min)
        {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

// Function to implement Dijkstra's Algorithm
void dijkstra(int graph[V][V])
{
    int dist[V], visited[V];

    // Initialize all distances as infinity and visited as 0
    for (int i = 0; i < V; i++)
    {
        dist[i] = INF;
        visited[i] = 0; // 0 means not visited
    }

    // Distance of source vertex (0) is 0
    dist[0] = 0;

    // Loop to process all vertices
    for (int count = 0; count < V; count++)
    {
        // Pick the minimum distance vertex
        int u = extractMin(dist, visited);

        if (u == -1)
            break;

        // Mark the vertex as visited
        visited[u] = 1;

        // Update distances of adjacent vertices
        for (int j = 0; j < V; j++)
        {
            // Check if edge exists and vertex is not visited
            if (graph[u][j] > 0 && !visited[j])
            {
                // Relaxation step
                if (dist[j] > dist[u] + graph[u][j])
                {
                    dist[j] = dist[u] + graph[u][j];
                }
            }
        }
    }

    // Print the shortest distances
    printf("\nVertex \t Distance from Source (0)\n");
    for (int i = 0; i < V; i++)
        printf("%d --> %d\n", i, dist[i]);
}

int main()
{
    // Adjacency matrix representation of graph
    int graph[V][V] = {
        {0, 10, 0, 30, 100},
        {10, 0, 50, 0, 0},
        {0, 50, 0, 20, 10},
        {30, 0, 20, 0, 60},
        {100, 0, 10, 60, 0}
    };

    dijkstra(graph);

    return 0;
}