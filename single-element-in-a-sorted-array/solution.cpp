class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int temp=0;
        vector<int>freq(100001,0);
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        for(int i=0;i<freq.size();i++)
        {
            if(freq[i]==1)
            {
                temp=i;
                break;
            }
        }

        return temp;
    }
};