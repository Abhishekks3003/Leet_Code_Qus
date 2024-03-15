class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        multiset<int> ms;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                ms.insert(nums[i]);
            }
        }

        // int j=0;
        // for(auto a:s){
        //     nums[j++]=a;
        // 
        // for(int i=0;i<mp.size();i++){

        // }

        int j=0;

        for(auto a:ms)
            nums[j++]=a;

        return ms.size();
    }
};