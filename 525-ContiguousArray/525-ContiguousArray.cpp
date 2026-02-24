// Last updated: 24/02/2026, 23:59:48
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int zero = 0, one = 0;
        int diff = 0;
        int result = 0;
        unordered_map<int, int>m;
        for(int i = 0; i < nums.size(); i++) { 
            if(nums[i] == 0) zero++; else one++;
            diff = zero - one;
            if(diff == 0) { 
                result = max(result, i+1);
                continue; 
            }
            if(m.find(diff) != m.end()) { 
                int res = i - m[diff];
                result = max(res, result);
            } else
            m[diff] = i;
        }
        return result;

    }
};