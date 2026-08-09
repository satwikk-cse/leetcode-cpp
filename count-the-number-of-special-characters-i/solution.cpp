class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>lower_freq(26,0);
        vector<int>upper_freq(26,0);
        
        for(int i=0;i<word.size();i++)
        {
            if(word[i]>='a' && word[i]<='z')
            {
                lower_freq[word[i]-'a']++;
            }
            if(word[i]>='A' && word[i]<='Z')
            {
                upper_freq[word[i]-'A']++;
            }
        }
        int count=0;
        for(int i=0;i<26;i++)
        {
            if(lower_freq[i]>=1 && upper_freq[i]>=1)
            {
                count++;
            }
        }
        return count;
    }
};