// Last updated: 2/11/2026, 10:01:41 AM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //  i      left      right
        // -4,    -1,   1,   2  
        // we will do sorting first whcihc is + point 
        // using 2 pointer approach where: i = 1 to n-2 and left = 0 and right = n-1 pointer 
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        vector<vector<int>> arr;

        while(i < n-2) {
            if(i > 0 && nums[i] == nums[i-1]) {
              i++;
              continue;
             }

            int left = i + 1, right = n - 1;

            while(left < right) {
              int sum = nums[i] + nums[left] + nums[right];
              
              if(sum == 0) {
                 arr.push_back({nums[i], nums[left], nums[right]});
                 left++;
                 right--;
                 while(left < n && nums[left] == nums[left - 1]) { 
                    left++;
                 }
                 while(right >= 0 && nums[right] == nums[right + 1]) { 
                    right--;
                 }
               }
              else if(sum > 0) {
                right--;
              }
              else left++;

            }
           i++;
        }

        return arr;

    }
};