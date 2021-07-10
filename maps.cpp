#include<bits/stdc++.h>
using namespace std;

//UNORDERED MAPS;
//Inbuilt Implementation : Hashtables
//Time complexity: O(1)
//Valid keys dataType: Only basic dataTypes whose hash function is defined.

//MAPS:
//Maps are implemented using Red Black trees
//Insertion and accessing a key value in maps takes O(log n) time
//Map store keys in sorted order

//MULTISET:
//Inbuilt Implementation : Hashtables

void printMap(map<int, string> &m) {
	for(auto val: m) {
		cout<<val.first<<" "<<val.second<<endl;
	}	
}

int main() {
    map<int, string> m;
    m[0] = "Happy";  //O(log n)
    m[1] = "Singh";

    m.insert(make_pair(2, "Rahul"));
    m.insert({3, "Kumar"});
	m[6];   // It is going to insert an empty string at key 6

	printMap(m);

	auto it = m.find(3);  //returns iterator, O(log n)
	
	if(it != m.end())
		erase(it); //Pass iterator or key to the erase function O(log n)
	erase(2);

	if(it != m.end()) {  // If key doesnot exist then find() function returns iterator at m.end()
		cout<<"Value exist";
	} else {
		cout<<"No Value exist";
	}
	
	m.clear()

}
