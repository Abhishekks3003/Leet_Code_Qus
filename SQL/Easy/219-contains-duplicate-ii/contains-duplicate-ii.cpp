class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    
       unordered_map<int,int> mp;

       for(int i=0;i<nums.size();i++){
           if(mp.find(nums[i])==mp.end()){
               mp.insert({nums[i],i});
           }else {
               auto it=mp.find(nums[i]);
               if(abs(it->second-i)<=k){
                   return 1;
               }
               else{
                   mp.erase(it);
                   mp.insert({nums[i],i});
               }
           }
       }

        return 0;
    }
};