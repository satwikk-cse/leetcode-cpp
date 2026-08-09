class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    /*
    Algo 1:
    sort the array->DECREASING
    return sorted_array[k-1] index
    if selection sort then call with a user defined function
    Every iteration takes O(n) and find xth maximum or minimum
    depending on requirement.
    If selection sort
    outer loop til kth term

    /*sort(nums.rbegin(),nums.rend());
    return nums[k-1];*/

    sort(nums.rbegin(),nums.rend());
    return nums[k-1];
    //ALgo 2:
    }
};