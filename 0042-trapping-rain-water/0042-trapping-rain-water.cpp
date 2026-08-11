class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        // Step-1: Previous Gretest Element nikalo
        vector<int>pg(n,-1);   // Previous Greatest
        int max=height[0];
        
        for(int i=1;i<n;i++)
        {
            pg[i]=max;
            if(max<height[i]) max=height[i];
        }

        // Step-2 Next Greatest Element nikalo
        vector<int>ng(n,-1);   // Next Greatest
        max=height[n-1];

        for(int i=n-1;i>=0;i--)
        {
            ng[i]=max;
            if(max<height[i])
            {
                max=height[i];
            }
        }

        // Step-3: Minimum water
        vector<int>mini(height.size(),0);
        for(int i=0;i<n;i++)
        {
            mini[i]=min(pg[i],ng[i]);
        }

        // Step-4: Calculating water
        int water=0;
        for(int i=1;i<n-1;i++)
        {
            if(height[i]<mini[i])
            {
                water+= (mini[i]-height[i]);
            }
        }

        return water;
    }
};