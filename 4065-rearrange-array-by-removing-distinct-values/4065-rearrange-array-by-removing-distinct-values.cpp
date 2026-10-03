class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        set<int>s;
        while(nums.size()!=0)
        {
            for(auto i:nums)
            {
                s.insert(i);
            }
            for(auto i:s)
            {
                ans.push_back(i);
                auto a=find(nums.begin(),nums.end(),i);
                nums.erase(a);
            }
            s.clear();
        }
        return ans;
    }
};