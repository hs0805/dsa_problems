#include<bits/stdc++.h>
using namespace std;

//INPUT
// vertices edges
//   
//  0 1
//  .
//  .
//  .
//  . . . m lines

//SAMPLE INPUT:
//3 2
//0 1
//1 2
//0 1


// Adjacency Matrix
/*
int main() {
	int n, m;
	cin >>n >>m;
	int graph[n+1][n+1];
	memset(graph, 0, sizeof(graph[0][0]) * (n+1)*(n+1));
	for(int i=0; i<m; ++i) {
		int v1, v2;
		cin >>v1 >>v2;
		graph[v1][v2] = 1;
		graph[v2][v1] = 1;
	}
	
	for(int i=0; i<n+1; ++i){
		for(int j=0; j<n+1; ++j) {
			cout<< graph[i][j]<<" ";
		}
		cout<<endl;
	}

}i
*/

// Adjacency list implementation
int main() {
	int n, m;
	cin >>n >> m;
	
	vector<int> graph[n];
	
	for(int i=0; i<m; ++i){
		int v1, v2;
		cin>>v1>>v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);		
	}	

	//Printing graph
	for(int i=0; i<m; ++i){
		for(auto child: graph[i]) {
			cout<< i<<" "<< child<<endl;
			cout<<child<<" "<<i<<endl;
		}
	}

}
