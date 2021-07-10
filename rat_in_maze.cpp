#include <bits/stdc++.h>
using namespace std;

int m=3;
int n=2;

int di[] = {1, 0, -1, 0};
int dj[] = {0, 1, 0, -1};
string sd[] = {"D", "R", "U", "L"};
void print_path(vector <vector<int> > v, int i, int j, string s, vector<vector<int>> &visited){
	if(v[m-1][n-1] == 0){
		cout << -1;
		return;
	}
    if (i >= m || j >= n || i < 0 || j < 0 || visited[i][j] == 1)
        return;
    if (i == m-1 && j == n-1){
        cout<<s<<"\t";
        return;
    }
    if(v[i][j] == 0)
        return;
    visited[i][j] = 1;
    for(int idx=0; idx<4; ++idx){
        s += sd[idx];
        print_path(v, i+di[idx], j+dj[idx], s, visited);
        s.pop_back();
    }
    visited[i][j] = 0;
}

int main() {
	vector < vector<int> > v = {{1, 0},{1,1},{1,1}};
	vector < vector<int> > visited(m, vector<int>(n, 0));
	string s = "";
	print_path(v, 0, 0, s, visited);
    return 0;
}

