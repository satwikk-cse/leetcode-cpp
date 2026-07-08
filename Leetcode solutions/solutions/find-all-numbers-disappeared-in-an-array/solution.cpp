class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>freq(n+1,0);
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        for(int i=1;i<freq.size();i++)
        {
            if(freq[i]==0)
            {
                v.push_back(i);
            }
        }
        return v;
    }
};