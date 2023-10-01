class Solution {
public:
    int mySqrt(int x) {

        int i;
        for(i=1;i<x;i++){
            if(pow(i,2)>x)
                break;
        }
        if(x==1)
            return 1;
        else
            return i-1;
    }
};