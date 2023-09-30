class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans=-1;
        for(int i=0;i<haystack.size();i++){
            ans=haystack.find(needle);

        }

        return ans;


    }
};