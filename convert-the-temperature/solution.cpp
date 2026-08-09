class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double F,K;
        F=1.80*celsius+32;
        K=celsius+273.15;
        return {K,F};
    }
};