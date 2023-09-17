class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int e1=nums[0];
        int e2=0;
        int cnt1=1;
        int cnt2=0;

        int n=nums.size();

        for(int i=1;i<n;i++){
            if(nums[i]==e1){
                cnt1++;
            }else if(nums[i]==e2){
                cnt2++;
            }else if(cnt2==0){
                e2=nums[i];
                cnt2++;
            }else if(cnt1==0){
                e1=nums[i];
                cnt1++;
            }else{
                cnt1--;
                cnt2--;
            }
        }


        vector<int> ans;

        cnt1=cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==e1){
                cnt1++;
            }else if(nums[i]==e2){
                cnt2++;
            }

        }

        if(cnt1>n/3){
            ans.push_back(e1);
        }
        if(cnt2>n/3){
            ans.push_back(e2);
        }

        return ans;
    }
};