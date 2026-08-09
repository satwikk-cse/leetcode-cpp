class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0, temp=0, ans=0;
        for(int i=0;i<nums.size();i++)
        {
            count=0;
            temp=nums[i];
            while(temp)
            {
                count++;
                temp/=10;
            }
            if(count%2==0)
            {
                ans++;
            }
        }
        return ans;
    }
};