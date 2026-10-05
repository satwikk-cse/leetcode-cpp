class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<pair<int,int>>s;

        for(int i=0;i<matrix.size();i++)
        {
            pair<int,int>p;
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    p.first=i;
                    p.second=j;
                    s.insert(p);
                }
            }
        }

        for(auto i:s)
        {
            for(int k=0;k<matrix.size();k++)
            {
                pair<int,int>p;
                for(int j=0;j<matrix[k].size();j++)
                {
                    if(i.first==k || i.second==j)
                    {
                        matrix[k][j]=0;
                    }
                }
            }
        }
    }
};