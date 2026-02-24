// Last updated: 24/02/2026, 10:58:21
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum = 0;
        for(int i = 0; i < nums.size(); i++) { 
            totalsum += nums[i];
        }
        int left = 0, right = 0;

        for(int i = 0; i < nums.size(); i++) { 
            right = totalsum - nums[i] - left;
            if(left == right) { 
                return i;
            }
            left += nums[i];
        }
        
        return -1;

    }
};