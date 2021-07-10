// A C/C++ Program to generate OTP (One Time Password)

#include<bits/stdc++.h>
using namespace std;

// A Function to generate a unique OTP everytime
void printSub(int index, int arr[], int n, int k, int &sum, int &cnt)
{
    if(index==n){
        if(sum%k==0)
            ++cnt;
        return;
    }
    sum += arr[index];
    printSub(index+1, arr, n, k, sum, cnt);
    sum -= arr[index];
    printSub(index+1, arr, n, k, sum, cnt);
}

// Driver Program to test above functions
int main()
{
    int n = 3;
    int k = 4;
    int arr[] = {6, 2, 4};
    int sum = 0;
    int cnt = 0;
    printSub(0, arr, n, k, sum, cnt);
    cout<<cnt;
}

