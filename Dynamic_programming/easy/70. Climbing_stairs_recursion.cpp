class Solution {
public:
    unordered_map<int,int> saved;
    int climbStairs(int n) {
        if (n<=1)
        return 1;
        if(saved.find(n)!=saved.end()){
            return saved[n];
        }
        saved[n]= climbStairs(n-1)+climbStairs(n-2);

        return saved[n];
    }
};