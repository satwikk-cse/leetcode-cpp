class Solution {
public:
    int fact(int n) {
        if(n==1 || n==0) return 1;
        return n*fact(n-1);
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>s;
        vector<vector<int>>ans;
        int n=nums.size();
        int a=fact(n);

        while(a>0)
        {
            s.insert(nums);
            next_permutation(nums.begin(),nums.end());
            a--;
        }

        for(auto i:s)
        {
            ans.push_back(i);
        }

        return ans;
    }
};