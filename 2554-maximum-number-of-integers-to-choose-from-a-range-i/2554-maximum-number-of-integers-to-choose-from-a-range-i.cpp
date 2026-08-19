class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int count=0;
        int sum=0;
        // unordered_set<int>s;
        unordered_map<int,int>mp;
        // for(int i=1;i<=n;i++)
        // {
        //     s.insert(i);
        // }
        for(int i=0;i<banned.size();i++)
        {
            mp[banned[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(mp.find(i)==mp.end())
            {
                sum+=i;
                if(sum<=maxSum)
                {
                    count++;
                }
            }
        }
        return count;
    }
};