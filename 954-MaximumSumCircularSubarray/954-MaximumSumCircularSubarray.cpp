// Last updated: 21/02/2026, 19:05:26
class Solution {
public:

    int maxsumfun(vector<int>& nums) {  
        
        int maxsum = nums[0];  
        int res = nums[0];
        int before = nums[0];
        for(int i = 1; i < nums.size(); i++) { 
           before = max(nums[i], before + nums[i]);
           res = max(before, res);
        }
        
        return res;

    }
      int minsumfun(vector<int>& nums) {  
        
        int minsum = nums[0];  
        int res = nums[0];
        int before = nums[0];
        for(int i = 1; i < nums.size(); i++) { 
           before = min(nums[i], before + nums[i]);
           res = min(before, res);
        }
        
        return res;
    }

    int maxSubarraySumCircular(vector<int>& nums) {
        
      int maxsum = maxsumfun(nums);      
      int minsum = minsumfun(nums);
      if(maxsum < 0) 
       return maxsum;

      int totalsum = 0;
         for(int i = 0; i < nums.size(); i++) { 
            totalsum += nums[i];
         }
        
      int result = max(maxsum, totalsum - minsum);
      return result;   
    }
};