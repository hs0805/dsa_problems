// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int countMin(string str){
    //complete the function here
        string s = str;
        reverse(s.begin(), s.end());
        
        int m = s.size();
        int n = str.size();
        int t[m+1][n+1];
        for(int i=0; i<m+1; ++i){
            for(int j=0; j<n+1; ++j){
                if(i ==0 || j == 0)
                    t[i][j]=0;
            }
        }
        
        for(int i=1; i<m+1; ++i){
            for(int j=1; j<n+1; ++j){
                if(str[i-1] == s[j-1])
                    t[i][j] = 1 + t[i-1][j-1];
                else 
                    t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
        
        return m-t[m][n];
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}

  // } Driver Code Ends
