class Solution {
public:
    int singleNumber(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int ans=0;
        int n=nums.size();

         if(n==1)
             return nums[0];
       

        for(int i=0;i<nums.size();i+=2){
            if(nums[i]!=nums[i+1]){
                ans= nums[i];
                break;
            }
        }

        return ans;
    }
};