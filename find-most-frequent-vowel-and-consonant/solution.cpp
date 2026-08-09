class Solution {
public:
    bool isvowel(char x) {
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
        {
            return true;
        }
        return false;
    }
    int maxFreqSum(string s) {
        int v_freq=0, c_freq=0;
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]-97]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(isvowel(s[i])==true && freq[s[i]-'a']>v_freq)
            {
                v_freq++;       // s[i]-'a' and s[i]-97 are same thing
            }
            else if(isvowel(s[i])==false && freq[s[i]-97]>c_freq)
            {
                c_freq++;
            }
        }
        return v_freq+c_freq;
    }
};