class Solution {
public:
    //abcaba
    int minimumLength(string s) {
        if(s.size() == 1) return 1;
        int l = 0;
        int r = s.size()-1;
        while(l<r){
            char curr = s[l];
                if(s[l]!=s[r]) break;
                
                while(s[l]==curr && l<r){
                    l++;
                    if(l==r) return 0;
                }
            
            while(s[r]==curr && l<r){
                    r--;
                }
        }
        return r-l+1;
    }
};