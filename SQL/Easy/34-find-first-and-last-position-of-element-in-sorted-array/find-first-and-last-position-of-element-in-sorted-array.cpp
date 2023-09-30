class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

            if(nums.size()==0){
                return {-1,-1};
            }
            
            int n=nums.size();
            int l=0;
            int hi=n-1;

            vector<int> ans(2,-1);

            while(l<=hi){
                int mid=l+(hi-l)/2;
                if(nums[mid]==target){
                    ans[0]=mid;
                    hi=mid-1;
                    
                }else if(nums[mid]>target){
                    hi=mid-1;
                }else{
                    l=mid+1;
                }
            }

        l = 0;
        hi = n - 1;
        
        while (l <= hi) {
            int mid = l + (hi - l) / 2;
            if (nums[mid] == target) {
                ans[1] = mid;  
                l = mid + 1; 
            } else if (nums[mid] > target) {
                hi = mid - 1;
            } else {
                l = mid + 1;
            }
        }
            return ans;
        }

};