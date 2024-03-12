class Solution {
public:
    void reverse1(string &s,int i,int j){
        while(i<j){
            char tmp=s[i];
            s[i]=s[j];
            s[j]=tmp;

            i++;
            j--;
        }
    }
    string reverseStr(string s, int k) {
        int i=0;
        int n=s.length();

        while(i<n){
            int j=min(i+k-1,n-1);
            reverse1(s,i,j);
            i=i+2*k;
        }

        return s;
    }
};