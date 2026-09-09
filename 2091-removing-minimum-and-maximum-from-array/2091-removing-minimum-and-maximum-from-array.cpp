class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min_del_front=0, max_del_front=0, min_del_rear=0, max_del_rear=0;

        int max=INT_MIN, min=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max) max=nums[i];
            if(nums[i]<min) min=nums[i];
        }

        for(int i=0;i<nums.size();i++)
        {
            min_del_front++;
            if(nums[i]==min)
            {
                break;
            }
        }

        for(int i=nums.size()-1;i>=0;i--)
        {
            min_del_rear++;
            if(nums[i]==min)
            {
                break;
            }
        }

        for(int i=0;i<nums.size();i++)
        {
            max_del_front++;
            if(nums[i]==max)
            {
                break;
            }
        }

        for(int i=nums.size()-1;i>=0;i--)
        {
            max_del_rear++;
            if(nums[i]==max)
            {
                break;
            }
        }

        return std::min(
        std::min(
            std::max(min_del_front, max_del_front),
            std::max(max_del_rear, min_del_rear)
        ),
        std::min(
            max_del_front + min_del_rear,
            max_del_rear + min_del_front
        ));
    }
};