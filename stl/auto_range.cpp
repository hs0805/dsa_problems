#include <bits/stdc++.h>
using namespace std;

void printVec(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = 0; j < v[i].size(); ++j)
        {
            cout << v[i][j] << " ";
        }
    }
    cout << "-----------";
}

void printVecPair(vector<pair<int, int>> &v)
{
    vector<pair<int, int>>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it).first << "  " << (*it).second << endl;
    }
}

vector<pair<int, int>> createVecofPair()
{
    vector<pair<int, int>> v_p;
    v_p = {{5, 6}, {4, 7}, {3, 7}, {5, 4}};
    return v_p;
}

int main()
{
    int N;
    cout << "Input N ";
    cin >> N;
    vector<vector<int>> v;
    for (int i = 0; i < N; ++i)
    {
        int n;
        cout << "Enter n";
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; ++j)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    printVec(v);
    vector<pair<int, int>> v_p = createVecofPair();
    // printVecPair(v_p);
    for (pair<int, int> p : v_p)
    {
        cout << p.first << " " << p.second << endl;
    }
    for (auto p : v_p)
    {
        cout << p.first << " " << p.second << endl;
    }
    for (auto p=v_p.begin(); p!=v_p.end(); ++p) {
        cout << p->first<< " " << p->second << endl; 
    }

    // auto keyword dynamically picks the datatype
}
