class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;
        int m=x;

        if(x<0){
            return 0;
        }
        while(x!=0){
            int dig=x%10;
            rev=(rev*10)+dig;
            x/=10;
        }

        if(rev==m){
            return 1;
        }else{
            return 0;
        }
    }
};