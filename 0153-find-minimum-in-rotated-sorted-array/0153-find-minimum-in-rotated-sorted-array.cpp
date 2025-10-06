class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        int mini = INT_MAX;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[start]<=nums[mid] && nums[end]<nums[mid]){
                start = mid+1;
            }
            else if(nums[start]<nums[mid] && nums[end]>nums[mid]){
                end = mid-1;
                mini = min(mini, nums[mid]);
            }
            else{
                mini = min(mini, nums[mid]);
                start++;
                end--;
            }
        }
        return mini;
    }
};