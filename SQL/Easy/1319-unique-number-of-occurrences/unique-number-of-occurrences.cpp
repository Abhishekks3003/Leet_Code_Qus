class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int ,int> mp;

        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }

        unordered_set<int> s;
        for(auto v:mp){

            int ele=v.second;
            if(s.count(ele)>0){
                return 0;
            }
            s.insert(ele);
        }

        return 1;

 
    }
};