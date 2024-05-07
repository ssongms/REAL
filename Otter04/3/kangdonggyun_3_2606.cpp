#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> createGraph(int num_nodes) {
    vector<vector<int>> graph(num_nodes + 1);
    int numEdges, a, b;
    cin >> numEdges;

    for (int i = 0; i < numEdges; i++) {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    return graph;
}

int dfs(vector<vector<int>>& graph, vector<bool>& visited, int start) {
    visited[start] = true;
    int count = 1; 

    for (int neighbor : graph[start]) {
        if (!visited[neighbor]) {
            count += dfs(graph, visited, neighbor);
        }
    }

    return count;
}

int main() {
    int num_nodes;
    cin >> num_nodes;

    vector<vector<int>> graph = createGraph(num_nodes);
    vector<bool> visited(num_nodes + 1, false);

    int virusCount = dfs(graph, visited, 1) - 1; // 1번 컴퓨터는 제외

    cout << virusCount << endl;

    return 0;
}