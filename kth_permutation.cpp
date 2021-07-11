class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> arr;
        for(int i=1;i<=n;++i)
            arr.push_back(i);
        string ans = "";
        int fact = 1;
        for(int i=1; i<n; ++i){
            fact = fact * i;
        }
        k -= 1;
        while(true){
            int block = k/fact;
            ans += (to_string(arr[block]));
            arr.erase(arr.begin() + block);
            if(arr.size() == 0)
                break;
            k %= fact;
            fact /= arr.size();
        }
        return ans;
    }
};
