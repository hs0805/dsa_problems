class Solution {
public:
    
    void queen(int c, vector<vector<string>> &ans, vector<string> &board, vector<int> &u_hash, vector<int> &l_hash, vector<int> &d_hash, int n) {
        if (c > n-1) {
            ans.push_back(board);
            return;
        }
        for(int r=0; r<n; ++r){
            // Check whehter Q can be placed or not?. Check for left, left upper, left down. Only 3 directions needs to be checked
            if (u_hash[n-1+c-r]==0 && l_hash[r]==0 && d_hash[r+c]==0){
                board[r][c] = 'Q';
                u_hash[n-1+c-r]=1;
                l_hash[r] = 1;
                d_hash[r+c] = 1;
                queen(c+1, ans, board, u_hash, l_hash, d_hash, n);
                board[r][c] = '.';
                u_hash[n-1+c-r]=0;
                l_hash[r] = 0;
                d_hash[r+c] = 0;
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string> >ans;    
        vector<int> u_hash(2*n-1, 0);
        vector<int> l_hash(n, 0);
        vector<int> d_hash(2*n-1, 0);
        // vector<string> board(n, "....");   Cannot use this as string size won't be equal to n
        vector<string> board(n);
        string s(n, '.');
        for(int i=0; i<n; ++i) {
            board[i] = s;
        }
        queen(0, ans, board, u_hash, l_hash, d_hash, n);
        return ans;
        
    }
};
