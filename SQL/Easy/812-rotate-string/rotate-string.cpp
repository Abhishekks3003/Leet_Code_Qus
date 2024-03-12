class Solution {
public:
    bool rotateString(string s, string goal) {
        string s1;

        int i=0;
        int n=s.length();
        while(i++<n){
            s1=s.substr(1,n-1);
            s1+=s[0];

            if(s1==goal){
                return 1;
                break;
            }
            else{   
                s=s1;
                //s1="";
            }
        }
        return 0;    
    }
};