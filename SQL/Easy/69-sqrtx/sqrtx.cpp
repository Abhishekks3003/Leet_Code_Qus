class Solution {
public:
    int mySqrt(int x) {
        

        if(x==1)
            return 1;

        int lo=1;
        int hi=x-1;

        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid>x){
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }

        return lo-1;
    }
};