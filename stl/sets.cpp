#include<bits/stdc++.h>
using namespace std;

//Use multiset instead of priority queue

void printSet(multiset<string> s) {
	for(string str: s) {
		cout<<str<<" ";
	}
	cout<<endl;
}

int main() {
	multiset<string> s;
	s.insert("abc"); //O(log n)
	s.insert("bcd");
	s.insert("acd");
	s.insert("abc");
	s.insert("bcd");

	cout<<"Original set :"<<endl;
	printSet(s);

	auto it = s.find("abc");
	if(it != s.end())	
		s.erase(it);		//erase only one value if iterator is passed O(1)

	s.erase("bcd");			//erase all vaues if value is passed in erase function  O(log n)

	cout<<endl <<"Set after erase"<<endl;
	printSet(s);

	map<pair<string, string>, vector<int> >m;

	int n;
	cin>>n;
	for(int i=0; i<n; ++i) {
		string fn, ln;
		int cnt;
		cin >> fn >> ln >> cnt;
		for (int j=0; j<cnt; ++j) {
			int x;
			cin >> x;
			m[{fn,ln}].push_back(x);
		}
	}
	
	for (auto &pr: m) {
		cout<< "pair is :"<< pr.first.first <<" "<<pr.first.second<<" ";
		for (auto &val: pr.second) {
			cout<<val<< " ";		
		}
		cout<<endl;
	}
}
