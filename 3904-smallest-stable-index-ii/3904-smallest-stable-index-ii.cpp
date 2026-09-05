class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int max=INT_MIN, min=INT_MAX;
        int n=nums.size();
        int ans=-1;
        
        vector<int>pref(nums.size(),0);
        vector<int>suff(nums.size(),0);

        for(int i=0;i<n;i++)
        {
            max=std::max(max,nums[i]);
            pref[i]=max;
        }

        max=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            min=std::min(min,nums[i]);
            suff[i]=min;
        }

        for(int i=0;i<n;i++)
        {
            if(pref[i]-suff[i]<=k)
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};