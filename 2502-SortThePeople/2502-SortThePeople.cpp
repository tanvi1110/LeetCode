// Last updated: 2/11/2026, 10:00:55 AM
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = heights.size();
        vector<pair<int, string>> mp(n);
        
        for (int i = 0; i < n; i++) {
            mp[i] = {heights[i], names[i]};
        }
        sort(mp.rbegin(), mp.rend());
         for(int i = 0; i < n; i++) 
            names[i] = mp[i].second;
        return names;    

    }
};