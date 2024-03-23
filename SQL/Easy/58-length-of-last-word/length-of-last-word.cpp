class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.length()-1;

        if(l==0)
           return 1;
            

        if(s[l]==' '){
            while(l>=0 and s[l]==' '){
                l--;
            }
        }

        int k=0;
        while(l>=0 and s[l]!=' '){
            l--;
            k++;
        }   

        return k;
    }
};