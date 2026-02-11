// Last updated: 2/11/2026, 10:01:39 AM
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        // -4, -1, 1, 2  
        // we will do sorting first whcihc is + point 
        // using 2 pointer approach where: i = 1 to n-2 and left = 0 and right = n-1 pointer 
        // store min diff : [ sum - target = diff ] 

        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        int max_diff = INT_MAX;
        int result;
        vector<vector<int>> arr;

        while(i < n-2) {
            if(i > 0 && nums[i] == nums[i-1]) {
              i++;
              continue;
             }

            int left = i + 1, right = n - 1;

            while(left < right) {
              int sum = nums[i] + nums[left] + nums[right];
              int diff = abs(sum - target);
                
                if(max_diff > diff) {
                    max_diff = diff;
                    result = sum;
                }
              
              if(sum == target) {
                 return sum;
               }
              else if(sum > target) {
                right--;
              }
              else {
                left++;
              }

            }
           i++;
        }

        return result;

    }
};