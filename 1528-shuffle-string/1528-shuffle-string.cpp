class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans="";
        vector<char>a(s.size());
        for(int i=0;i<indices.size();i++)
        {
            a[indices[i]]=s[i];
        }
        for(int i=0;i<a.size();i++)
        {
            ans+=a[i];
        }
        return ans;
    }
};