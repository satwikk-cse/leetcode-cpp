class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>pre(n,1);
        vector<int>suf(n,1);
        vector<int>ans(n);
        for(int i=1;i<nums.size();i++)
        {
            pre[i]=nums[i-1]*pre[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            suf[i]=suf[i+1]*nums[i+1];
        }
        for(int i=0;i<ans.size();i++)
        {
            ans[i]=pre[i]*suf[i];
        }
        return ans;
    }
};