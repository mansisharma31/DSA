class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            int left, right;
            if (mid - 1 >= 0) {
                left = nums[mid - 1];
            } else {
                left = INT_MIN;
            }

            if (mid + 1 < nums.size()) {
                right = nums[mid + 1];
            } else {
                right = INT_MIN;
            }

            if (nums[mid] > left && nums[mid] > right) {
                return mid; 
            }

            else if (nums[mid] < right) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return 0;
    }
};
