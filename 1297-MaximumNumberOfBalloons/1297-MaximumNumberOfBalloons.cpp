// Last updated: 18/03/2026, 16:54:35
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> ballon;
        unordered_map<char, int> given;

        string b = "balloon";
        for(int i = 0; i < 7; i++) {
            ballon[b[i]]++;
        }
        for(int i = 0; i < text.size(); i++) {
            given[text[i]]++;
        }
        // b - 1    
        // a - 1
        // l - 2
        // o - 2
        // n - 1
        vector<int> res;

        for(auto i: ballon) {
          char c = i.first;
           int balInt = i.second;
           int givInt = given[c];
           int div = givInt / balInt;
           if(div < 1) return 0;
           else{
            res.push_back(div);
           }

        }
        sort(res.begin(), res.end());
        return res[0];


    }
};