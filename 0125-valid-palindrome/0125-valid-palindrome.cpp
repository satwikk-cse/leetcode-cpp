class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for(int i=0;i<s.size();i++)
        {
            if((int)s[i]<48 || ((int)s[i]>57 && (int)s[i]<65) || ((int)s[i]>90 && (int)s[i]<97) || (int)s[i]>122)
            {
                continue;
            }
            else
            {
                s1.push_back(s[i]);
            }
        }

        string s2=s1;
        transform(s2.begin(),s2.end(),s2.begin(),::tolower);
        transform(s1.begin(),s1.end(),s1.begin(),::tolower);
        reverse(s2.begin(),s2.end());

        if(s1==s2) return true;
        return false;
    }
};