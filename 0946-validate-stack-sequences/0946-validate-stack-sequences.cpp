class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>s;
        int n=pushed.size();
        int k=0;
        for(int i=0;i<pushed.size();i++)
        {
            s.push(pushed[i]);
            while(!s.empty() && s.top()==popped[k])
            {
                s.pop();
                k++;
            }
        }
        if(s.empty()) return true;
        return false;
    }
};