class Solution {
public:
    int reverse(int x) {
        int rev=0;
        while(x>0)
        {
            rev=(rev*10)+(x%10);
            x/=10;
        }
        return rev;
    }
    int sumBase(int n, int k) {
        //converting into base k
        int a=0;
        while(n>0)
        {
            a=(a*10)+(n%k);
            n/=k;
        }
        int b=reverse(a);

        int sum=0;
        while(b>0)
        {
            int a=b%10;
            sum+=a;
            b/=10;
        }
        return sum;
    }
};