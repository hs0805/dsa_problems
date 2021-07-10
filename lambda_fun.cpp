#include<bits/stdc++.h>
using namespace std;

int main() {
	
	auto sum = [](int x, int y){return x+y; };
	cout<<sum(5, 6)<<endl;


	vector<int> v = {1, 5, -5, 7};

	//check if all numbers are positive
	cout<< all_of(v.begin(), v.end(), [](int x){return x > 0;}) << endl;
	
	cout<< any_of(v.begin(), v.end(), [](int x){return x > 0;}) << endl;

	
	cout<< none_of(v.begin(), v.end(), [](int x){return x > 0;}) << endl;
}
