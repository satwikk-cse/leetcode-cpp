class Solution {
public:
    bool isPalindrome(int x) {
        double rev=0,ld;
        int temp=x;
        while(x>0)
        {
            ld=x%10;
            rev=(rev*10)+ld;
            x=x/10;
        }
        if(rev==temp)
        {
            return true;
        }
        else
        {
            return false;
        }
        return 0;
    }
};