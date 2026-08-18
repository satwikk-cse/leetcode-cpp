class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        int n=nums.size();
        int m=operations.size();
        // vector<int>v;
        unordered_map<int,int>mp;       // value,position
        int j=0;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]=i;
        }

        for(int i=0;i<operations.size();i++)
        {
            if(mp.find(operations[i][j]) != mp.end())
            {
                nums[mp[operations[i][j]]]=operations[i][j+1];
                mp[operations[i][j+1]]=mp[operations[i][j]];
            }
        }

        return nums;
    }
};