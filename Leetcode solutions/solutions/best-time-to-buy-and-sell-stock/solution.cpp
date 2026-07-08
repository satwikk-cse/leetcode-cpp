class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0, min_price=INT_MAX, index=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min_price)
            {
                min_price=prices[i];
                index=i;
            }
            if(prices[i]-min_price>profit)
            {
                profit=prices[i]-min_price;
            }
        }
        return profit;
    }
};