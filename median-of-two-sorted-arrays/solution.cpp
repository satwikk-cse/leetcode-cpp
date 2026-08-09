class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double a;
        vector<int>v;
        for(int i=0;i<nums1.size();i++)
        {
            v.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        int k=v.size();
        int mid=k/2;
        if(k%2!=0)
        {
            a=v[mid];
        }
        else
        {
            double b=(double)v[mid];
            double c=(double)v[mid-1];
            a=(b+c)/2;
        }
        return a;
    }
};