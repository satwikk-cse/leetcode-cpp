class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev1=0, rev2=0, temp1=num;
        while(temp1>0)
        {
            rev1=rev1*10+temp1%10;
            temp1/=10;
        }
        int temp=rev1;
        while(temp>0)
        {
            rev2=rev2*10+temp%10;
            temp/=10;
        }
        if(rev2==num)
        {
            return true;
        }
        return false;
    }
};