// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    void maze(vector<vector<int>> &m, int n, int i, int j, string s, vector<vector<bool> > &visited, int di[], int dj[], string sdir, vector<string> &ans) {
        if(i == n-1 && j == n-1){
            ans.push_back(s);
            return;
        }

        for(int idx = 0; idx<4; ++idx){
            int nexti = i+di[idx];
            int nextj = j+dj[idx];
            if(nexti < n && nextj < n && nexti >= 0 && nextj >= 0 && m[nexti][nextj] == 1 and !visited[nexti][nextj]) {
                visited[i][j] = true;
                maze(m, n, nexti, nextj, s+sdir[idx], visited, di, dj, sdir, ans);
                visited[i][j] = false;              
            }
        }        
        
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        int di[] = {1, 0, 0, -1};
        int dj[] = {0, -1, 1, 0};
        string sdir = "DLRU";
        vector<vector<bool> > v(n, vector<bool>(n, false));
        vector<string> ans;
        if (m[0][0] == 1 && m[n-1][n-1] == 1)
            maze(m, n, 0, 0, "", v, di, dj, sdir, ans);
        return ans;
            
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
