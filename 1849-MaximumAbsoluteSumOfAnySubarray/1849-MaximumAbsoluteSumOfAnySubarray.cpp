// Last updated: 21/02/2026, 19:05:19
class Solution {
public:

    int maxsum(vector<int>& nums) {
        int res = nums[0];
        int prevsum = nums[0];
        int maxsum = INT_MIN;
        for(int i = 1; i < nums.size(); i++) {
            
            prevsum = max(nums[i], prevsum + nums[i]);
            res = max(res, prevsum);
        }
        return res;
    }
    int minsum(vector<int>& nums) {
        int res = nums[0];
        int prevsum = nums[0];
        int maxsum = INT_MIN;
        for(int i = 1; i < nums.size(); i++) {
            prevsum = min(nums[i], prevsum + nums[i]);
            res = min(res, prevsum);
        }
        return res;
    }
    int maxAbsoluteSum(vector<int>& nums) {
        int maxsumnum = maxsum(nums);
        int minsumnum = minsum(nums);
        int maxval = max(abs(maxsumnum), abs(minsumnum));

        return maxval;
        
    }
};