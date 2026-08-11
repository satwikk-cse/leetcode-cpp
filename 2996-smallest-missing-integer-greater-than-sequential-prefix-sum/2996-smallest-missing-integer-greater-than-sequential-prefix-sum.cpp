class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]+1)
            {
                sum+=nums[i];
            }
            else
            {
                break;
            }
        }

        vector<int>freq(100,0);
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }


        // ye check karna hai ki sum present hai ki nahi; agar nahi present to return sum

        bool present=false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==sum)
            {
                present=true;
            }
        }
        
        if(present==false)
        {
            return sum;
        }
        while(freq[sum]!=0)
        {
            sum++;
        }
        return sum;
    }
};