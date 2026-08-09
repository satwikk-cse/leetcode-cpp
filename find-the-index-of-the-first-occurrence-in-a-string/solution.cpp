class Solution {
public:
    int strStr(string haystack, string needle) {
        int temp=-1;
        for(int i=0;i<haystack.size();i++)
        {
            if(haystack.substr(i,needle.size())==needle)
            {
                temp=i;
                break;
            }
        }
        return temp;
    }
};