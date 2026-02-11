// Last updated: 2/11/2026, 10:00:52 AM
#include<bits/stdc++.h>
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        // nums = [1,2,3,4,5,6 ] = bad pair   i, j   {  }
        unordered_map<int, int> mpp;
        long long n = nums.size();
        long long good_pairs = 0;
        long long total = (long long)(n * (n - 1)) / 2;
         
         for(int i = 0; i < n; i++) {
           int key = nums[i] - i;
           good_pairs += mpp[key]; // count occureneces
           mpp[key]++; // store occurences
         }
    
       return total - good_pairs;
    //    nums = [4,1,3,3] i = 2, j = 3 nums[i] = 3, nums[j] = 3, 1 == 0 
    //    
    }
};
