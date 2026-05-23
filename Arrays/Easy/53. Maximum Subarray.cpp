class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best =0,current=0;
        for(int x:nums){
            current=max(x,current+x);
            best=max(best,current);
        }
    return best;
    }
};