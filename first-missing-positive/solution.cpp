class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int temp=nums.size()+1;
        sort(nums.begin(),nums.end());
        vector<int>freq(nums.size()+1,0);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0 && nums[i]<=nums.size())
            {
                freq[nums[i]]++;
            }
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(freq[i]==0)
            {
                temp=i;
                break;
            }
        }
        return temp;
    }
};