#include <iostream>
#include <climits>
using namespace std;

#define INF 99999  
#define MAX 100    

void BellmanFord(int graph[MAX][MAX], int V, int src) {
    int dist[MAX];

    for (int i = 0; i < V; i++)
        dist[i] = INF;
    dist[src] = 0;

    // Step 2: Relax all edges (V-1) times
    for (int k = 0; k < V - 1; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (graph[i][j] != INF && dist[i] != INF && dist[i] + graph[i][j] < dist[j]) {
                    dist[j] = dist[i] + graph[i][j];
                }
            }
        }
    }

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (graph[i][j] != INF && dist[i] != INF && dist[i] + graph[i][j] < dist[j]) {
                cout << "Graph contains a negative weight cycle!" << endl;
                return;
            }
        }
    }

    cout << "Vertex\tDistance from Source\n";
    for (int i = 0; i < V; i++)
        cout << i << "\t" << dist[i] << endl;
}

int main() {
    int V;
    cout << "Enter number of vertices: ";
    cin >> V;

    int graph[MAX][MAX];
    cout << "Enter adjacency matrix (use " << INF << " for no edge):\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }

    int src;
    cout << "Enter source vertex: ";
    cin >> src;

    BellmanFord(graph, V, src);
    return 0;
}