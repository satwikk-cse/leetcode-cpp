class Solution {
public:
    bool isAnagram(string s, string t) {

        // Approach-1

        /*sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) return true;
        return false;*/


        // Approach-2

        /*if(s.size()!=t.size()) return false;
        unordered_map<char, int>mp1;
        for(int i=0;i<s.size();i++)
        {
            mp1[s[i]]++;
        }

        unordered_map<char, int>mp2;
        for(int i=0;i<t.size();i++)
        {
            mp2[t[i]]++;
        }

        for(auto i:mp1)
        {
            char ch1 = i.first;     // Key
            int freq1 = i.second;   // Value

            if(mp2.find(ch1) != mp2.end())
            {
                int freq2=mp2[ch1];     // Frequency in string t

                if(freq2 !=freq1) return false;
            }
            else return false;
        }
        return true;*/

        // Approach-3

        if(s.size()!=t.size()) return false;
        unordered_map<char, int>mp1;
        for(int i=0;i<s.size();i++)
        {
            mp1[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            char ch=t[i];
            if(mp1.find(ch) != mp1.end())
            {
                mp1[ch]--;
                if(mp1[ch]==0) mp1.erase(ch);
            }
            else return false;
        }

        if(mp1.size()>0) return false;
        return true;

    }
};