class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        if(nums.size()==1 && k==nums[0])
        {
            return 2*nums[0];
        }
        if(nums.size()==1)
        {
            for(int i=1;i<=nums[0];i++)
            {
                if(i%k==0)
                {
                    return i;
                }
            }
        }
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int a=k;
        int b=a;
        int ans;
        for(int i=0;i<=s.size();i++)
        {
            if(s.find(b) == s.end())
            {
                ans=b;
                break;
            }
            b=b+a;
            
        }
        return ans;
    }
};