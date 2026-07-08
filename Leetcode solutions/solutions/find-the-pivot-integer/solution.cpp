class Solution {
public:
    int pivotInteger(int n) {
        int lsum=0, rsum=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                lsum+=j;
            }
            for(int j=i;j<=n;j++)
            {
                rsum+=j;
            }
            if(lsum==rsum)
            {
                return i;
            }
            lsum=0;
            rsum=0;
        }
        return -1;
    }
};