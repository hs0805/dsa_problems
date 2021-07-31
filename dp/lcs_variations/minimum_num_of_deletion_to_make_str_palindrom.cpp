// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    int minimumNumberOfDeletions(string S) { 
        // code here
        string str = S;
        reverse(str.begin(), str.end());
        int m = S.size();
        int t[m+1][m+1];
        for(int i=0; i<m+1; ++i){
            for(int j=0; j<m+1; ++j){
                if(i == 0 || j == 0) 
                    t[i][j] = 0;
            }
        }
        
        for(int i=1; i<m+1; ++i){
            for(int j=1; j<m+1; ++j){
                if(S[i-1] == str[j-1])
                    t[i][j] = 1+t[i-1][j-1];
                else {
                    t[i][j] = max(t[i-1][j], t[i][j-1]);
                }
            }
        }
        return m-t[m][m];
    } 
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
return 0;
}  // } Driver Code Ends
