// Last updated: 2/11/2026, 10:00:53 AM
#include<bits/stdc++.h>

class Solution {
public:

    int sumOfDigits(int num) {
        int sum = 0;
         // temp = 18
        // 10 + 8 = 18

        while(num!=0) {
          int rem = num % 10; /// rem = 1 
          sum = sum + rem; // sum = 8 + 1 = 9
          num = num / 10; // temp = 1
        }
        return sum;
    }


    int maximumSum(vector<int>& nums) {
        // bruteforce

        unordered_map<int, int> mpp;

        int maxSum = -1;
        for(int i = 0 ; i < nums.size(); i++) {
            int digitSum = sumOfDigits(nums[i]);
              if( mpp.find(digitSum) != mpp.end(digitSum) ) {
                maxSum = max(maxSum, mpp[digitSum] + nums[i]);
                
              }
              mpp[digitSum] = max(mpp[digitSum], nums[i]);
        }
        return maxSum;
    }
};