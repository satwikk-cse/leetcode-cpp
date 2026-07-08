class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int lsum=0, rsum=0;
        vector<int>ans(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                lsum+=nums[j];
            }
            for(int k=i+1;k<nums.size();k++)
            {
                rsum+=nums[k];
            }
            ans[i]=abs(lsum-rsum);
            lsum=0, rsum=0;
        }
        return ans;
    }

};