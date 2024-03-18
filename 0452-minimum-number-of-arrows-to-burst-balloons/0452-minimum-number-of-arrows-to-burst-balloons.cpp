bool cmp(vector<int> a, vector<int> b){
        return a[1]<b[1];
    }
class Solution {
public:
    
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), cmp);
        int count = 0, arrow = 0;
        //consider arrow is at x=0
        for(int i=0;i<points.size();i++){
            // IF the arrow is lacking the start point of the balloon
            // Add the count and make the arrow's position as the end point of
            // this balloon. End point is selected as we have sorted it with the
            // endpoint
            if(count == 0 || arrow<points[i][0]){
                count++;
                arrow = points[i][1];
            }
        }
        return count;
    }
};