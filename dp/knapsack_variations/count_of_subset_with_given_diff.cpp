
#include<bits/stdc++.h>
using namespace std;

// Let sum of subset 1 be s1 and subset 2 with s2
// s1 - s2 = diff (given)
// s1 + s2=sum of array (logical)
// Therefore adding both eq we get :
// 2s1= diff + sum of array
// s1= (diff + sum of array)/2;
// Problem reduces to find no of subsets with given sum**


void count_of_subset_with_given_diff(int arr[], int n, int sum){
{
    // Initializing the matrix
    int t[n + 1][sum + 1];
  // Initializing the first value of matrix
    t[0][0] = 1;
    for (int i = 1; i <= sum; i++)
        t[0][i] = 0;
    for (int i = 1; i <= n; i++)
        t[i][0] = 1;
 
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < sum+1; j++)
        {
          // if the value is greater than the sum
            if (arr[i - 1] <= j)
                t[i][j] = t[i - 1][j] + t[i - 1][j - arr[i - 1]]; 
            else
                  t[i][j] = t[i - 1][j];
        }
    }
    cout<<t[n][sum];
}
}


int main()
{
    int nums[] = {1, 1, 2, 3};
    int n = 4;
    int diff = 1;
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=nums[i];
    
    int reqSum=(diff+sum)/2;
    
    count_of_subset_with_given_diff(nums, n, reqSum);
}

