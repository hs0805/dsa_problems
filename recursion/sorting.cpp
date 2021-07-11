#include<bits/stdc++.h>
using namespace std;

bool should_i_sort(pair<int, int> &a, pair<int, int> &b) {
	if (a.first != b.first) {
		if(a.first > b.first) return true;
		return false;
	} else {
		if(a.second > b.second) return true;
		return false;
	}
}

bool cmp(pair<int, int> &a, pair<int, int> &b) {
	if(a.first != b.first) {
		return a.first < b.first;
	}
	return a.second > b.second;
}

int main() {
	int n;
	cin >> n;

	vector< pair<int, int> > v(n);

	for (int i=0; i<n; ++i) {
		int x, y;
		cin >> x >> y;
		v[i] = {x, y};
	}
	
	for(int i =0; i<n; ++i){
		for(int j=i; j<n; j++) {
			if (should_i_sort(v[i], v[j])) {
				swap(v[i], v[j]);
			}
		}
	}

	//sort(v.begin(), v.end());

 	for(auto &val: v){
		cout<<val.first<< " "<<val.second<<"\t";
	}
	cout<<endl;

	cout<<"Enter a vecror of pairs :" << endl;
    
	vector< pair<int, int> > v1(n);

    for (int i=0; i<n; ++i) {
        int x, y;
        cin >> x >> y;
        v1[i] = {x, y};
    }

   	sort(v1.begin(), v1.end(), cmp);
	
    for(auto &val: v1){
        cout<<val.first<< " "<<val.second<<"\t";
    }
    cout<<endl;


}
