class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>ans;
        vector<int>winner;
        vector<int>loser;

        unordered_set<int>win;
        unordered_map<int,int>lose;

        for(int i=0;i<matches.size();i++)
        {
            win.insert(matches[i][0]);
            lose[matches[i][1]]++;;
        }

        for(auto i:lose)
        {
            if(i.second==1)
            {
                loser.push_back(i.first);
            }
        }
        for(auto i:win)
        {
            if(lose.find(i)==lose.end())
            {
                winner.push_back(i);
            }
        }
        
        sort(winner.begin(),winner.end());
        sort(loser.begin(),loser.end());
        
        ans.push_back(winner);
        ans.push_back(loser);

        return ans;
    }
};