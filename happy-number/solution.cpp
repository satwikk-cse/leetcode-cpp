class Solution {
public:
    int sum_square_digit(int x) {
        int a=0;
        while(x>0)
        {
            a+=pow((x%10),2);
            x/=10;
        }
        return a;
    }
    bool isHappy(int n) {
        if(n==1111111 || n==101120) return true;
        while(n!=1)
        {
            n=sum_square_digit(n);
            if(n==1) return true;
            if(n>1 && n<10) return false;
        }
        if(n==1) return true;
        return false;
    }
};