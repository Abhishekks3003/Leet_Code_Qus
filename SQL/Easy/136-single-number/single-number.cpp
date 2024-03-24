class Solution {
public:
    int singleNumber(vector<int>& nums) {

        map<int,int> mp;
        int ans=0;
        if(nums.size()==1)
            return nums[0];


        for(auto a:nums)
            mp[a]++;


        for(auto a:mp){
            if(a.second==1){
                ans= a.first;
                break;    
            }
        }

        return ans;
    }
};