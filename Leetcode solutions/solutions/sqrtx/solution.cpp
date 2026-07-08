class Solution {
public:
    int mySqrt(int x) {
        long long int i;
        for(i=0;i<=x;i++)
        {
            if(i*i==x)
            {
                return i;
            }
            else if(i*i>x)
            {
                if(i>1)
                {
                    return i-1;
                }
            }
        }
        return i;
    }
};