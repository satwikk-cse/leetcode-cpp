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
    bool isprime(int x) {
        if(x<=1) return false;
        if(x==2) return true;
        if(x%2==0) return false;

        for(int i=3;i<=sqrt(x);i+=2)
        {
            if(x%i==0) return false;
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {
        int r=reverse(n);
        int sum=0;
        for(int i=min(n,r);i<=max(n,r);i++)
        {
            if(isprime(i))
            {
                sum+=i;
            }
        }
        return sum;
    }
};