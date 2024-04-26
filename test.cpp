#include <iostream>
#include <vector>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

// Function to solve the Traveling Salesman Problem using dynamic programming
int tsp(const vector<vector<int>>& graph, int start) {
    int n = graph.size();
    vector<vector<int>> dp(1 << n, vector<int>(n, INF));
    dp[1 << start][start] = 0;

    for (int mask = 1; mask < (1 << n); ++mask) {
        for (int u = 0; u < n; ++u) {
            if (!(mask & (1 << u))) continue;
            for (int v = 0; v < n; ++v) {
                if (!(mask & (1 << v)) || u == v) continue;
                dp[mask][v] = min(dp[mask][v], dp[mask ^ (1 << v)][u] + graph[u][v]);
            }
        }
    }

    int minCost = INF;
    for (int v = 0; v < n; ++v) {
        if (v != start) {
            minCost = min(minCost, dp[(1 << n) - 1][v] + graph[v][start]);
        }
    }
    return minCost;
}

int main() {
    vector<vector<int>> graph = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int start = 0; // Starting city index
    int minCost = tsp(graph, start);

    cout << "Minimum cost of traveling salesman problem: " << minCost << endl;

    return 0;
}