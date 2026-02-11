// Last updated: 2/11/2026, 10:01:12 AM
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        map<int, int> mpp;
        int dv = 0;
        int cnt = 0;
        mpp[0] = 1;
        for(int i = 0; i<nums.size() ; i++){
            dv += nums[i];
            int x = dv % k;
            if(x < 0) {
                x += k;
            }
            if(mpp.find(x) != mpp.end()) {
            cnt += mpp[x];
            mpp[x]++;
            } 
            else {
                mpp[x] = 1;
            }

        }
        return cnt;

    }
};