class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {

        int a = 0 ; // dp[i-2]
        int b = 0 ; // dp[i-1]

        for( int i = 2 ; i <= cost.size() ; i++ ){
            int c = min( a + cost[i-2], b + cost[i-1] );
            a = b ;
            b = c ;
        }

        return b;
    }
};
