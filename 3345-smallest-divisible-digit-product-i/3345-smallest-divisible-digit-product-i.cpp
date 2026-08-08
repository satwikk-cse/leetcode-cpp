class Solution {
public:
    int pod(int x)
    {
        int temp=x;
        int p=1;
        while(temp>0)
        {
            int a=temp%10;
            p*=a;
            temp/=10;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
        int ans=-1;
        for(int i=n;i<=100;i++)
        {
            if(pod(i)%t==0)
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};