// Last updated: 2/11/2026, 10:01:28 AM
#include<bits/stdc++.h>

class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n = arr.size();
	double maxi = INT_MIN;
	double prefix = 1, suffix = 1;
	for(int i = 0; i < n ; i++) {
	   if(prefix == 0) prefix = 1;
	   if(suffix == 0) suffix = 1;

	   prefix = prefix * arr[i];
	   suffix = suffix * arr[n-i-1];
	   maxi = max(maxi, max(prefix, suffix));
	}
	return (int)maxi;
    }
};