class Solution {
public:
    bool isBalanced(string num) {
        int even=0, odd=0;
        for(int i=0;i<num.length();i++)
        {
            if(i%2==0)
            {
                even+=(num[i]-'0');     // Changing character to number using ascii values
            }
            else
            {
                odd+=(num[i]-'0');
            }
        }
        if(even==odd)
        {
            return true;
        }
        return false;
    }
};