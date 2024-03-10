class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> a;
        for(auto i:nums1){
            if(a[i]<1) a[i]++;
        }
        for(auto i:nums2){
            if(a[i]==1){
                ans.push_back(i);
                a[i]--;
            } 
        }
        return ans;
    }
};