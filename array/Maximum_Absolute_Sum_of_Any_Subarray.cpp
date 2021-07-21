class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int ps = 0;
        int ans = INT_MIN;
        int ns = 0;
        
        for(int &val: nums){
            ps+= val;
            ns+= val;
            
            ans = max({ans, ps, abs(ns)});
            if(ps < 0)
                ps = 0;
            if(ns > 0)
                ns = 0;
            
        }
        return ans;
    }
};
