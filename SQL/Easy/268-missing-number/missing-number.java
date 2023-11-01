import java.util.List;

class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int ans = -1;

        for (int i = 0; i <= n; i++) {
            boolean found = false;
            for (int num : nums) {
                if (num == i) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                ans = i;
                break;
            }
        }

        if (!contains(nums, 0)) {
            return 0;
        }
        
        return ans;
    }

    private boolean contains(int[] nums, int target) {
        for (int num : nums) {
            if (num == target) {
                return true;
            }
        }
        return false;
    }
}
