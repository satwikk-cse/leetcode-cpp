class Solution {
public:
    int sod(int n) {
        int sum=0;
        int temp=n;
        while(temp>0)
        {
            sum+=(temp%10);
            temp/=10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int ans=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(sod(nums[i])==i)
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};