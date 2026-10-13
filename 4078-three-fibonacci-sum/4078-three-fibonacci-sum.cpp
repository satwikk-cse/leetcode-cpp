class Solution {
public:
    bool threeFibonacciSum(int n) {
        int a=0, b=1;

        int c=a+b;
        while(c<=n)
        {
            if(a+b+c==n) return true;
            a=b;
            b=c;
            c=a+b;
        }
        return false;
    }
};