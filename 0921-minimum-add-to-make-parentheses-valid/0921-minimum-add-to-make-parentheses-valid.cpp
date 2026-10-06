class Solution {
public:
    int minAddToMakeValid(string s) {
        int op=0, cp=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                op++;
            }
            if(s[i]==')' && op>0)
            {
                op--;
            }
            else if(s[i]==')')
            {
                cp++;
            }
        }
        return op+cp;
    }
};