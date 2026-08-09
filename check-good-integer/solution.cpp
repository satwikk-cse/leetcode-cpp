class Solution {
public:
    bool checkGoodInteger(int n) {
        int digit_sum=0, square_sum=0;
        while(n>0)
        {
            int a=n%10;
            digit_sum+=a;
            square_sum+=a*a;
            n/=10;
        }
        if(square_sum-digit_sum>=50) return true;
        return false;
    }
};