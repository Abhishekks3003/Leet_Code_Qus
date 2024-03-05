class Solution {
public:
    bool isAnagram(string s, string t) {


        if(s.length()!=t.length())
            return 0;

        map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }

        for(int i=0;i<t.length();i++){
            if(mp.find(t[i])!=mp.end()){
                mp[t[i]]--;
            }else{
                return 0;
            }
        }

        for(auto a:mp){
            if(a.second!=0)
                return 0;
        }

        return 1;    
    }
};