#include <bits/stdc++.h>
using namespace std;

void permute(int index, vector<int> &arr, int n, vector<vector<int> > &ans){
    if(index == n) {
        ans.push_back(arr);
        return;
    }
    for(int i=index; i<n; ++i) {
        swap(arr[index], arr[i]);
        permute(index+1, arr, n, ans);
        swap(arr[index], arr[i]);
    }
}

int main() {
    vector<int> arr = {1,2,3};
    vector<vector<int> > ans;
    permute(0, arr, 3, ans);
    for(auto val : ans){
        for(auto vv: val) {
            cout<<vv<< " " ;
        }
        cout<<endl;
    }
	return 0;
}
