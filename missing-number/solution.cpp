class Solution {
public:
    int missingNumber(vector<int>& nums) {
    //     int m=0;
    //     sort(nums.begin(),nums.end());
    //     for(int i=0;i<nums.size()-1;i++)
    //     {
    //         if(nums[i]+1 != nums[i+1])
    //         {
    //             return nums[i]+1;
    //         }
    //     }
    //     return 0;
        int temp=0;
        sort(nums.begin(),nums.end());
    int n=nums.size();   // n=9
    for(int i=0;i<n;i++){
        if(nums[i]==temp)
        {
            temp++;
        }
        else
        {
            break;
        }
    }
    return temp;
     }
};