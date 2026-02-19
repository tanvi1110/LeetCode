// Last updated: 19/02/2026, 16:34:41
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int beforesum = 0;
        int result = INT_MIN;  
        int ans = INT_MIN;
        for(int i = 0; i < nums.size(); i++) { 
            beforesum += nums[i]; // -1
            int aftersum = nums[i]; // 1
            result = max(beforesum, aftersum); // 1
            ans = max(result, ans);
            if(result == aftersum) 
            { 
                 beforesum = aftersum;   
             }
        }
        return ans;

    }
};