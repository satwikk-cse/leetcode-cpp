class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0, p=1;
        while(n>0)
        {
            int a=n%10;
            sum+=a;
            p*=a;
            n=n/10;
        }
        return p-sum;
    }
};