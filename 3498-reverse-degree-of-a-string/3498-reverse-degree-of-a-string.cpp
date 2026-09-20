class Solution {
public:
    char rev_deg(char a) {
        return (char)('z'-a+1);
    }
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            sum+=((i+1)*rev_deg(s[i]));
        }
        return sum;
    }
};