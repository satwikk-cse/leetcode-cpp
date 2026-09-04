class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int max=INT_MIN, min=INT_MAX;
        int n=nums.size();
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            int a=*max_element(nums.begin(),nums.begin()+i);
            int b=*min_element(nums.begin()+i,nums.end());
            if(a-b<=k)
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};