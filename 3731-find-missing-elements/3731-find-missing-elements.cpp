class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int>s;
        vector<int>v={};
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }

        for(int i=*min_element(nums.begin(),nums.end());i<=*max_element(nums.begin(),nums.end());i++)
        {
            if(s.find(i)==s.end())
            {
                v.push_back(i);
            }
        }
        return v;
    }
};