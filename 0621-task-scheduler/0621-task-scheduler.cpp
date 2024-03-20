class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>mp;
        int count = 0;
        for(auto e : tasks)
        {
            mp[e]++;
            count = max(count, mp[e]);//considering the max count as that is the only element which creates trouble;
        }
        
        int ans = (count-1)*(n+1); //counts the spaces needed by troubling element
        for(auto e : mp) if(e.second == count) ans++; //counts the last occurence of the element 
        return max((int)tasks.size(), ans);
    }
};