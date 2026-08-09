class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<int>freq(100001,0);
        int temp=-1;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                if(freq[nums[i]]>temp)
                {
                    temp=freq[nums[i]];
                }
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(freq[nums[i]]==temp && nums[i]%2==0 && nums[i]<ans)
            {
                ans=nums[i];
            }
        }
        if(ans==INT_MAX) ans=-1;
        return ans;
    }
};