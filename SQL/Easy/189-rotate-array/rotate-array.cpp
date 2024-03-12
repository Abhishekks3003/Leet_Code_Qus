class Solution {
public:

    void reverse1(vector<int> &nums,int i,int j){
        while(i<j){
            int tmp=nums[i];
            nums[i]=nums[j];
            nums[j]=tmp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        
        
        int n=nums.size();
        k=k%n; //if k > n
        reverse1(nums,0,n-1);
        reverse1(nums,0,k-1);
        reverse1(nums,k,n-1);
        
    }
};