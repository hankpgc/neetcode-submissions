class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0 ;
        int sell = 1 ;
        int profit = 0;

        while( sell < prices.size() ){
            profit = max((prices[sell] - prices[buy]), profit) ;

            if( prices[sell] < prices[buy] ) 
                buy = sell ;

            sell++ ;
        }

        return profit ;
    }
};
