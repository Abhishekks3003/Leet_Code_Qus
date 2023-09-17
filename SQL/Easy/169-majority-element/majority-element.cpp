class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();

        int e1=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(cnt==0){
                e1=nums[i];
                cnt=1;
            }else if(nums[i]==e1){
                cnt++;
            }else{
                cnt--;
            }
        }

        cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==e1){
                cnt++;
            }
        }

        if(cnt>n/2){
            return e1;
        }else{
            return -1;
        }
    }
};