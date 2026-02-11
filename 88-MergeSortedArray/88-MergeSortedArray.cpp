// Last updated: 2/11/2026, 10:01:30 AM
#include<bits/stdc++.h>

class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        
           int k=0;

    for(int i=m;i<m+n && k<n;i++)

    {

        arr1[i]=arr2[k++];

    }

    sort(arr1.begin(),arr1.end());

    }
};