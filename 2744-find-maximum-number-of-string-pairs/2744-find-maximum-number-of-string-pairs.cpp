class Solution {
public:
    string reverse(string s) {
        std::reverse(s.begin(),s.end());
        return s;
    }
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string>s;
        for(int i=0;i<words.size();i++)
        {
            s.insert(words[i]);
        }

        int count=0;
        for(int i=0;i<words.size();i++)
        {
            if(words[i]==reverse(words[i]))
            {
                continue;
            }
            else if(s.contains(reverse(words[i])))
            {
                count++;
                s.erase(words[i]);
            }
        }
        return count;
    }
};