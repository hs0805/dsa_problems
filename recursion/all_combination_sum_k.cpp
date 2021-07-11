#include <bits/stdc++.h>
using namespace std;

int m=3;
int n=2;

int counter(vector<int> &v, int index, int sum, int cnt){
    if(sum == 0){
        return ++cnt;
    }
    if (sum < 0)
        return 0;
    if(index >= v.size())
        return 0;
    int ls = 0;
    int rs = 0;
    if(v[index]<=sum){
        sum -= v[index];
        ls = counter(v, index, sum, cnt);
        sum += v[index];
    }
    sum -= v[index+1];
    rs = counter(v, index+1, sum, cnt);
    sum += v[index+1]; 
 
    return ls + rs;
}

int main() {
	vector<int> v = {2, 5};
	int sum = 10;
	int cnt = 0;
	int ans = counter(v, 0, sum, cnt);
    cout<<"sum is :"<< ans;
    
}

