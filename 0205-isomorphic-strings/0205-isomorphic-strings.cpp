class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mps;
        unordered_map<char,char>mpt;
        for(int i=0;i<s.size();i++)
        {
            if((mps.find(s[i])!=mps.end() && mps[s[i]]!=t[i]) || (mpt.find(t[i])!=mpt.end() && mpt[t[i]]!=s[i]))
            {
                return false;
            }
            mps[s[i]]=t[i];
            mpt[t[i]]=s[i];
        }
        return true;
    }
};