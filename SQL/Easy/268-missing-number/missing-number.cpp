class Solution {
public:
    int missingNumber(vector<int>& nums) {
         int n=nums.size();
        // if(n==1){
        //     if(nums[0]!=0)
        //         return 0;
        // }

        int ans;
        for(int i=1;i<=n;i++){
            auto it=i;
            if(find(nums.begin(),nums.end(),it)==nums.end()){
                ans=i;
                break;
            }
        }

        if(find(nums.begin(),nums.end(),0)==nums.end())
            return 0;
        return ans;
    }
};