// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
  int subsetSum(int arr[], int n, int sum) {
      bool t[n+1][sum+1];
      
      for(int i=0; i<n+1; ++i){
          for(int j=0; j<sum+1; ++j){
              if(i == 0)
                t[i][j] = false;
              if(j == 0)
                t[i][j] = true;
          }
      }
      
      for(int i=1; i<n+1; ++i){
          for(int j=1; j<sum+1; ++j){
            if(arr[i-1]<=j)
                t[i][j] = t[i-1][j] || t[i-1][j-arr[i-1]];
            else
                t[i][j] = t[i-1][j];
          }
      }
    int diff = INT_MAX;
 
    for (int j = sum / 2; j >= 0; j--) {
        // Find the
        if (t[n][j] == true) {
            diff = sum - 2 * j;
            break;
        }
    }
    return diff;
      
  }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum =  0;
	    for(int i=0; i<n; ++i)
	        sum += arr[i];
	    return subsetSum(arr, n, sum);
	    
	} 
};
//5
// 11 18 24 18 18

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends
