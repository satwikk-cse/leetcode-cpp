class Solution {
public:
    char findTheDifference(string s, string t) {
        char temp;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=s[0], j=t[0];
        for(int i=0;i<s.size();i++)
        {
            j++;
            if(s[i]!=t[i])
            {
                temp=t[i];
                break;
            }
        }
        return temp;
    }
};