class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        map<int,bool> mp1;

        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }

        for(auto it=mp.begin();it!=mp.end();it++){
            int ele=it->second;
            if(mp1[ele]){
                return 0;
            }
            mp1[ele]=1;
        }

        return 1;
    }

};