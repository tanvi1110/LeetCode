// Last updated: 2/11/2026, 10:01:20 AM
#include <vector>
#include <algorithm>
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> inter;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int n1 = nums1.size(), n2 = nums2.size();
        int left = 0;
        int i = 0;
        int right = 0;
        while(left < n1 && right < n2) {
            if(nums1[left] == nums2[right]) {
                inter.push_back(nums1[left]);
                left++; right++;
            }
            else if(nums1[left] < nums2[right]) {
                left++;
            }
            else {
                right++;
            }


            i++;
        }
        return inter;
        
    }
};