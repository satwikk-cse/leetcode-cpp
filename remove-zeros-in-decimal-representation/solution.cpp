class Solution {
public:
    long long removeZeros(long long n) {
        string s=to_string(n);
        string s1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='0')
            {
                s1.push_back(s[i]);
            }
        }
        long long a=stoll(s1);
        return a;
    }
};