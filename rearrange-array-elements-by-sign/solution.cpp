class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v1;  // +ve
        vector<int>v2;  // -ve
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                v1.push_back(nums[i]);
            }
            else
            {
                v2.push_back(nums[i]);
            }
        }
        int j=0,k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                v.push_back(v1[j]);
                j++;
            }
            else
            {
                v.push_back(v2[k]);
                k++;
            }
        }
        return v;
    }
};