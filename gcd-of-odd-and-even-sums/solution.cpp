class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd=0, sumeven=0;
        for(int i=1;i<=n;i++)
        {
            if(n%2!=0)
            {
                sumodd+=n;
            }
            else
            {
                sumeven+=n;
            }
        }
        return n;
        
    }
};