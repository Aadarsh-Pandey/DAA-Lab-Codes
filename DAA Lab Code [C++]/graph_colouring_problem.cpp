#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int v, vector<vector<int>>& graph, vector<int>& color, int c) {
    for (int i = 0; i < graph.size(); i++) {
        if (graph[v][i] == 1 && color[i] == c)
            return false;
    }
    return true;
}

bool graphColoringUtil(int v, vector<vector<int>>& graph, int m, vector<int>& color) {
    int n = graph.size();

    if (v == n)
        return true;

    for (int c = 1; c <= m; c++) {
        if (isSafe(v, graph, color, c)) {
            color[v] = c;

            if (graphColoringUtil(v + 1, graph, m, color))
                return true;

            color[v] = 0;
        }
    }

    return false;
}

int main() {
    int n, m;
    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter number of colors: ";
    cin >> m;

    vector<vector<int>> graph(n, vector<int>(n));
    cout << "Enter adjacency matrix:\n";

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> graph[i][j];

    vector<int> color(n, 0);

    if (graphColoringUtil(0, graph, m, color)) {
        cout << "\nSolution exists! Coloring:\n";
        for (int i = 0; i < n; i++)
            cout << "Vertex " << i << " → Color " << color[i] << "\n";
    } else {
        cout << "\nNo solution possible with " << m << " colors.\n";
    }

    return 0;
}
