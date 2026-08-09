class Solution {
public:
    int countEven(int num) {
        int i=1, temp=0;
        int sum=0, count=0;
        while(i<=num)
        {
            temp=i;
            while(temp>0)
            {
                int a=temp%10;
                sum+=a;
                temp/=10;
            }
            if(sum%2==0) count++;
            sum=0;
            i++;
        }
        return count;
    }
};