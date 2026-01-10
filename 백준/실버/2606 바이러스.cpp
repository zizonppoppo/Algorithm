#include <iostream>
#include <vector>
using namespace std;

vector <vector<int>> graph;
vector <bool> visited;

void DFS(int node, int& count) {
	visited[node] = true;
	count++;

	for (int next : graph[node]) {
		if (!visited[next]) DFS(next, count);
	}
}

int main() {
	int n, m, a, b;
	int  count = -1;
	cin >> n;
	cin >> m;
	graph.resize(n+1);
	visited.resize(n + 1, false);

	while (m--) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	DFS(1, count);
	cout << count;
}