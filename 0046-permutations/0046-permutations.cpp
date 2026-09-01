class Solution {
public:
    int fact(int n)
    {
        if(n==0 || n==1) return 1;
        return n*fact(n-1);
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;

        v=nums;
        int a=fact(nums.size());
        while(a>0)
        {
            ans.push_back(v);
            next_permutation(v.begin(),v.end());
            a--;
        }
        return ans;
    }
};