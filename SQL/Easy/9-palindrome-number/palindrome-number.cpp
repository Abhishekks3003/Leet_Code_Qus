class Solution {
public:
    bool isPalindrome(int x) {
        long long new_num=0;
        
        int c=x;
        while(x!=0){
            int d=x%10;
            new_num=new_num*10+d;
            x/=10;
        }

        if(new_num==abs(c))
            return 1;

        return 0;    
    }
};