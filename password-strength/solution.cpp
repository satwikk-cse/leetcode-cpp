class Solution {
public:
    int passwordStrength(string password) {
        sort(password.begin(),password.end());
        string s=password;
        int point=0;
        for(int i=0;i<password.size();i++)
        {
            if(s[i]==s[i+1])
            {
                continue;
            }
            if((int)s[i]>=97 && (int)s[i]<=122)
            {
                point++;
            }
            else if((int)s[i]>=65 && (int)s[i]<=90)
            {
                point+=2;
            }
            else if((int)s[i]>=48 && (int)s[i]<=57)
            {
                point+=3;
            }
            else
            {
                point+=5;
            }
        }
        return point;
    }
};