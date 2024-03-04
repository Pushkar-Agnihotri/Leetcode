class Solution {
public:
    // 200 0 [100,200,300,400],
    // face up
    // curr power atleast tokens[i], pow - tokens[i], score++

    // face down
    // curr score atleast 1, pow+=tokens[i], score--
    void faceup(int token, int& power, int& score){
        power -= token;
        score++;
        return;
    }
    void facedown(int token, int& power, int& score){
        power += token;
        score--;
        return;
    }
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score = 0;
        int ans = 0;
        sort(tokens.begin(), tokens.end());
        int l = 0;
        int r = tokens.size() - 1;
        while(l<=r){
            
            if(tokens[l]<=power){
                faceup(tokens[l], power, score);
                l++;
            }
            else{
                if(score>0) facedown(tokens[r], power, score);
                r--;
            }
            cout<<power<<" "<<score<<endl;
            ans = max(ans, score);
        }
        return ans;
    }
   
};