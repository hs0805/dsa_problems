#include<bits/stdc++.h>
using namespace std;

void getIndices(int arr[], int n) {
	int start = -1; 
	int end = -1;
	int cnt = 0;
	int finalStart = 0;
	int finalEnd = 0;
	int maxstream = INT_MIN;

	while(end<n) {
		if(arr[start] != 0 || arr[end] != 0){
			cnt = 0;
			end++;
			start = end;
			continue;
		}
		if (arr[end] == 0) {
			++cnt;
		}
		if(maxstream<cnt){
			finalStart = start;
			finalEnd = end;
			maxstream = cnt;
		}
		++end;
	}
	cout<<finalStart<<" "<<finalEnd<<" "<<maxstream<<endl;
} 

int main() {
	int arr[] = {1, 0, 0, 0, 0, 1, 0, 0};
 	int n = (sizeof(arr)/sizeof(arr[0]));
 	getIndices(arr, n);
}
