// Last updated: 2/11/2026, 10:00:51 AM
#include<bits/stdc++.h>
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int windowsize = 0, totalOnes = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1)  windowsize++;
        }
        int curZeros = 0;
        for(int i = 0; i < windowsize; i++) {
            if(nums[i] == 0) curZeros++;
        }

        int minZeros = curZeros;
        int start = 0, end = windowsize - 1;
        while(start < nums.size()) {
            // if removed element was 0 decrement 0 counter
            if(nums[start] == 0) curZeros--;
            start++; end++;
            if(nums[end % (nums.size())] == 0) curZeros++;
            minZeros = min(minZeros, curZeros);

        }
        return minZeros;  
        
    }
};