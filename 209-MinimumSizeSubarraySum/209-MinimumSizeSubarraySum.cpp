// Last updated: 2/11/2026, 10:01:24 AM
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
    // low, high
        //  0  1  2  3  4  5
    // [ 2, 3, 1, 2, 4, 3 ]
      int low = 0 ; int high = 0;
      int result = INT_MAX; int res = 0;
      int n = nums.size();
      int sum = 0;
      while(high < n) {
        sum = sum + nums[high];
        while(sum >= target) {
             res = high - low + 1;
            result = min(res, result);
            low++;
            sum -= nums[low - 1 ];
        } 
        high++;

      }  
      if(result > n) return 0;
      return result;
    }
};