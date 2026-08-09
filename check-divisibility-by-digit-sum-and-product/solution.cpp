class Solution {
public:
    bool checkDivisibility(int n) {
        int s=0, p=1;
        int temp=n;
        while(temp>0)
        {
            int a=temp%10;
            s+=a;
            p*=a;
            temp/=10;
        }
        if(n%(s+p)==0) return true;
        return false;
    }
};