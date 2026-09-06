class Solution {
public:
    bool ispalindrome(string s)
    {
        string s1=s;
        reverse(s1.begin(),s1.end());
        if(s==s1) return true;
        return false;
    }
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(int i=0;i<words.size();i++)
        {
            if(ispalindrome(words[i]) == true)
            {
                ans=words[i];
                break;
            }
        }
        return ans;
    }
};