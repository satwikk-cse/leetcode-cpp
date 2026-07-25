class Solution {
public:
    int maxProduct(int n) {
        int max1=INT_MIN, max2=INT_MIN;
        int temp=n;
        while(temp>0)
        {
            int b=temp%10;
            if(b>max1)
            {
                max2=max1;
                max1=b;
            }
            else if(b>max2 && b<=max1)
            {
                max2=b;
            }
            temp/=10;
        }
        if(max1==INT_MIN) return max2*max2;
        else if(max2==INT_MIN) return max1*max1;
        return max1*max2;
    }
};