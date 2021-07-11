// A C/C++ Program to generate OTP (One Time Password)

#include<bits/stdc++.h>
using namespace std;
int m=3;
int n=3;
string navString = "DRLUABCE";
int di[] = {1, 0, -1, 0, -1, -1, 1, 1};
int dj[] = {0, 1, 0, -1, -1, 1, -1, 1};

void path(int i, int j, string s, vector<vector <bool> > &visited) {

    if(i >= m || j >= n || i < 0 || j < 0 || visited[i][j])
    {
        return;
    }
    if(i == m-1 && j == n-1){
        cout<<s<<"  ";
        return;
    }
    visited[i][j] = true;
    for(int it = 0; it< 8; ++it){
        s += navString[it];
        path(i+di[it], j+dj[it], s, visited);
        s.pop_back();
    }
    visited[i][j] = false;
    // s += 'D';
    // path(i+1, j, s, visited);
    // s.pop_back();
    // s += 'R';
    // path(i, j+1, s, visited);
    // s.pop_back();
    // s += 'U';
    // path(i-1, j, s, visited);
    // s.pop_back();
    // s += 'L';
    // path(i, j-1, s, visited);
    // s.pop_back();
    // s += 'A';
    // path(i-1, j-1, s, visited);
    // s.pop_back();
    // s += 'B';
    // path(i-1, j+1, s, visited);
    // s.pop_back();
    // s += 'C';
    // path(i+1, j-1, s, visited);
    // s.pop_back();
    // s += 'D';
    // path(i+1, j+1, s, visited);
    // s.pop_back();
}

// Driver Program to test above functions
int main()
{
    // int arr[][] = {{1,2},{4,6},{7,9}};
    vector< vector <bool> > visited(m, vector<bool>(n,false));
    string p = "";
    path(0,0,p, visited);

    // cout<<cnt;
	return(0);
}

