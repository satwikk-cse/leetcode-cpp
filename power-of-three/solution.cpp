class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<0 || n==2)
        {
            return false;
        }
        for(long int i=sqrt(n);i>0;i--)
        {
            if(pow(3,i)==n)
            {
                return true;
            }
            else if(pow(3,i)<n)
            {
                return false;
            }
        }
        
        return n;
    }
};