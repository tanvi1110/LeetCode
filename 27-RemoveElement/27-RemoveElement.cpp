// Last updated: 2/11/2026, 10:01:38 AM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0 ;
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[index] = nums[i];
                index++;
            }

        }
        // [0, 0, 1, 2, 2, 2, 3, 4] val = 2 
        return index;

        // int cnt = 0;
        // for(int i = 0; i < nums.size(); i++) {
        //     if(nums[i] != val) cnt++; 
        // }
        // cout<<cnt<<endl;
        // return cnt;


    }
};