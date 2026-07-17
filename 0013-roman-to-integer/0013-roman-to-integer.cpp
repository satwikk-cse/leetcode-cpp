class Solution {
public:
    int value(char x){
        if(x=='I') return 1;
        if(x=='V') return 5;
        if(x=='X') return 10;
        if(x=='L') return 50;
        if(x=='C') return 100;
        if(x=='D') return 500;
        if(x=='M') return 1000;
        return -1;
    }
    int romanToInt(string s) {
        int size=s.size();
        int num=0;
        
        for(int i=size-1;i>=0;i--)
        {
            num+=value(s[i]);
            if(value(s[i+1])>value(s[i]))
            {
                num-=2*(value(s[i]));
            }
        }
        return num;
    }
};