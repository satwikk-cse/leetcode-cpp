class Solution {
public:
    int kthFactor(int n, int k) {
        int count=0;
        int temp=-1;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0) count++;
            if(count==k)
            {
                temp=i;
                break;
            }
        }
        return temp;
    }
};