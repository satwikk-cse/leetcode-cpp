class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        unordered_set<int>s;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>n/3)
            {
                s.insert(nums[i]);
            }
        }
        for(auto i:s)
        {
            ans.push_back(i);
        }
        return ans;
    }
};