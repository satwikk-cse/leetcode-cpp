// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1, high=n, temp;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(isBadVersion(mid-1)==true && isBadVersion(mid)==false)
            {
                temp=mid;
            }
            else if(isBadVersion(low)==false) low=mid+1;
            else if(isBadVersion(high)==true) high=mid-1;
        }
        return temp;
    }
};