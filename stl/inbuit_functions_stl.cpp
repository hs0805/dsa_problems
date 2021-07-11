#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v(n);

	for (int i=0; i<n; ++i) {
		cin >> v[i];
	}

	int min = *min_element(v.begin(), v.end()); // returns iterator/pointer
	cout<<"min element is "<< min << endl;
	
	int max = *max_element(v.begin(), v.end());
	cout<<"max element is "<< max << endl;

	int sum = accumulate(v.begin(), v.end(), 0);  // 0 is the initial sum
	cout<<"Sum of elements is :"<<sum<<endl;
	
	int ct = count(v.begin(), v.end(), 2);
	cout<<"count of 2 is :"<< ct << endl;

	auto it = find(v.begin(), v.end(), 2);
	if(it != v.end()) 
		cout << *it << endl;
	else
		cout << "Not found" << endl;

	reverse(v.begin(), v.end());

	for(auto &val: v)
		cout << val << " ";
	

}
