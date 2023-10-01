class Solution {
public:
    int mySqrt(int x) {

        int l=1,hi=x;
        int res=0;
        while(l<=hi){
            int mid=l+(hi-l)/2;
            if(pow(mid,2)==x){
                return mid;
            }
            else if(pow(mid,2)>x){
                hi=mid-1;
            }else{
                l=mid+1;
                res=mid;
            }
        }
        return res;
    }
};