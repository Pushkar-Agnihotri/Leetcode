class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map <char, int> m;
        string ans;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(int i=0;i<order.size();i++){
            while(m[order[i]]--){
                ans.push_back(order[i]);
            }
        }
        for(auto x:m){
            if(x.second>0){
                while(m[x.first]--){
                    ans.push_back(x.first);
                }
            }
        }
        return ans;
    }
};