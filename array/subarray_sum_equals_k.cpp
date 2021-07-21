class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        int ans = 0;
        if (n<1)
            return 0;
        int sum = 0;
        
        unordered_map< int, int > m;
        m.insert({0,1});
        
        for(int i=0; i<n; ++i) {
            sum += nums[i];
            
            if (m.find(sum-k) != m.end()) {
                ans += m[sum-k];
            }
            ++m[sum]; 
        }
        
        return ans;
    }
};


// 15
// s = 33
// s-k = 18
// ans = 0 + 1 + 1 + 1

// 0 -> 1
// 10 -> 1
// 15 -> 1
// 22 -> 1
// 23 -> 1
// 25 -> 1
// 30 -> 1
// 33 -> 1
