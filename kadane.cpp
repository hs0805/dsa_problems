#include<bits/stdc++.h>
using namespace std;

int maxSumWorst(int arr[], int n) {
    int max = INT_MIN;
    for(int i=0; i<n; ++i) {  //O(n3)
        for(int j=i; j<n; ++j) {
            int sum = 0;
            for(int k=i; k<=j; ++k)  //gernerating subarrays
                sum += arr[k];      //taking sum of subarrays
            if (max<sum)
                max = sum;
        }
    }
    return max;
}

int maxSumAvg(int arr[], int n) {

    int prefixSum[n];
    prefixSum[0] = arr[0];
    
    for(int i=1; i< n; ++i) 
        prefixSum[i] = arr[i] + prefixSum[i-1];  //prefix sum to get sum in O(1)
	
    int max = INT_MIN;
    for(int i=0; i<n; ++i) {  //O(n2)
        for(int j=i; j<n; ++j) {
			int sum;
			if(i == 0)
				sum = 0;	
			else
				sum = prefixSum[j] - prefixSum[i-1];   //sum between i and j indexes
            
			if (max<sum)      
                max = sum;
        }
    }
    return max;
    
}

int maxSumBest(int arr[], int n) {
    int max = INT_MIN;
    int sum = 0; 
    
    for(int i=0; i<n; ++i) {  //O(n)
        sum += arr[i];
        if (max < sum) {
            max = sum;
        }
        if (sum<0)    //reset sum to 0 if sum is negative. We already have the max .
            sum = 0;
    }
    
    return max;
}

int main()
{
    //int arr [] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int arr[] = {-2, -1, 5, -4, 3, -1, 3, -4, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxSumWorst(arr, n)<<endl;
    cout<<maxSumAvg(arr, n)<<endl;
    cout<<maxSumBest(arr, n)<<endl;
	return(0);
}

