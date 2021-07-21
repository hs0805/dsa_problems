class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans = 0;
        int sum = 0;
        unordered_map <int, int>m;
        m.insert({0,1});
        for(auto &val: nums){
            sum += val;
            
            if (m.find(sum%k) != m.end())
                ans += m[sum%k];
            
            ++m[sum%k];
        }
        return ans;
    }
};
