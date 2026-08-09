class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>freq(26,0);
        int temp=-1;
        for(int i=0;i<s.length();i++)
        {
            freq[(int)s[i]-97]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(freq[(int)s[i]-97]==1)
            {
                temp=i;
                break;
            }
        }
        return temp;
    }
};