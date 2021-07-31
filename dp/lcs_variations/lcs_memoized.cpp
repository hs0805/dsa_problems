// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcss(int x, int y, string s1, string s2, int t[][1001]){
        // your code here

        if(x == 0 || y == 0)
            return 0;
       	if(t[x-1][y-1] != -1) 
			return t[x-1][y-1];
        if(s1[x-1] == s2[y-1]){
            t[x-1][y-1] = 1 + lcss(x-1, y-1, s1, s2, t);
			return t[x-1][y-1];
	    }
	    else {
            t[x-1][y-1] = max( lcss(x-1, y, s1, s2, t), lcss(x, y-1, s1, s2, t) );
  		    return t[x-1][y-1];
	    }
    }

    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        int t[1001][1001];
        memset(t, -1, sizeof(t));
        return lcss(x, y, s1, s2, t);
       
    }
};


// { Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends
