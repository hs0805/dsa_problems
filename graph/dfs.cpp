#include<bits/stdc++.h>
using namespace std;

//SAMPLE INPUT
//6 9
//0 2
//0 4
//2 4
//2 3
//2 5
//2 1
//1 5
//3 5
//4 5


void DFS(vector<int> g[], vector<bool> visited], int size, int vertex) {
	//take action on vertex after enetring the vertex
	
	if (visited[vertex]) return;
	visited[vertex] = true;
	cout<<vertex<< " ---> ";
	for(auto child: g[vertex]) {

		//Take action on child before entering the child node
		DFS(g, visited, size, child);
		
		//Take action on child after exiting the child node
	}

	//Take action on vertex before exiting the vertex
}

int main() {
	int n, m;
	cin >>n >> m;
	
	vector<int> graph[n];
	vector<bool> visited(n, false);

	for(int i=0; i<m; ++i) {
		int v1,v2;
		cin >> v1 >>v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}

	DFS(graph, visited, n, 0);

}

