// A C/C++ Program to generate OTP (One Time Password)

#include<bits/stdc++.h>
using namespace std;

// A Function to generate a unique OTP everytime
void printSub(int index, int arr[], int n, vector<int> &v)
{
    if(index==n){
        cout<<"[ ";
        for(auto &val: v)
            cout<<val<<" ";
        cout<<"]"<<endl;
        return;
    }
    v.push_back(arr[index]);
    printSub(index+1, arr, n, v);
    v.pop_back();
    printSub(index+1, arr, n, v);
}

// Driver Program to test above functions
int main()
{
    int n = 3;
    int arr[] = {2, 4, 6};
    vector<int> v;
    
    printSub(0, arr, n, v);
}

