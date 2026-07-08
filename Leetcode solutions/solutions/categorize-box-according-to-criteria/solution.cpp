class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long x=10000, y=1000000000;
        long long v=(long long)length*width*height;
        if((length>=x || width>=x || height>=x || v>=y) && mass>=100)
        {
            return "Both";
        }
        else if(length>=x || width>=x || height>=x || v>=y)
        {
            return "Bulky";
        }
        else if(mass>=100)
        {
            return "Heavy";
        }
        else if((length<x || width<x || height<x || v<y) && mass<100)
        {
            return "Neither";
        }
        else
        {
            return "Neither bulky nor heavy";
        }
    }
};