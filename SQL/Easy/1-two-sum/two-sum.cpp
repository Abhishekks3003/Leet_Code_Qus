class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n=nums.size();
    vector<pair<int,int>> p;
    vector<int> ans;

    
	for(int i=0;i<n;i++){
          p.push_back({nums[i], i});
        } 
	
	sort(p.begin(),p.end());
	
	int s=0,end=n-1;
	
	while(s<=end){
		int sum=p[s].first+p[end].first;
		if(sum==target){
            ans.push_back(p[s].second);
            ans.push_back(p[end].second);
			break;
        } 
		else if (sum > target) {
             end--;
        } else {
             s++;
        }
    }

	if(ans.size()==0)
		return {-1,-1};
	
	return ans;	
    }
};