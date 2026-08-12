class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_set<int>set;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }

        for(auto i: mp)
        {
            int freq=i.second;
            if(set.find(freq) != set.end()) return false;
            else set.insert(freq);
        }

        return true;
    }
};