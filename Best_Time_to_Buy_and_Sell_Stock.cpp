class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = 10000;
        int maxprofit = 0;
        for(int i = 0; i < prices.size(); i++){
            maxprofit = max(maxprofit, prices[i] - minprice);
            minprice = min(prices[i], minprice);
        }
        return maxprofit;
    }
};
