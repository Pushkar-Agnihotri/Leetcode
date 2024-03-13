class Solution {
public:
    int pivotInteger(int n) {
        int sum = n*(n+1)/2;
        for(int i=1;i<=n;i++){
            int currSum = i*(i+1)/2;
            if(2*currSum == sum+i) return i;
        }
        return -1;
    }
};