class Solution {
public:
    double final_price (double p, double d)
    {
        return p*(100-d)/100;
    }
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        int i=prices.size()-1, j=discounts.size()-1;
        // Final Price ho jayega
        // final_price = (p*(100-d))/100
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());

        double fp=0;
        while(i>=0 && j>=0)
        {
            fp+=final_price(prices[i],discounts[j]);
            i--;
            j--;
        }
        if(prices.size()>discounts.size())
        {
            while(i>=0)
            {
                fp+=prices[i];
                i--;
            }
        }
        return fp;
    }
};