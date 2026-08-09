class Solution {
public:
    char repeatedCharacter(string s) {
        char temp;
        int count=0;
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]-'a']++;
            if(freq[s[i]-'a']==2)
            {
                temp=s[i];
                break;
            }
        }
        return temp;
    }
};