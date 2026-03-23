class Solution {
    public int findPeakElement(int[] nums) {
        int start = 0;
        int end = nums.length - 1;

        while(start<=end){
            int mid = start + (end-start)/2;
            int prev = 0;
            int next = 0;

            if (mid - 1 >= 0) {
                prev = nums[mid - 1];
            } else {
                prev = Integer.MIN_VALUE;
            }

            if (mid + 1 < nums.length) {
                next = nums[mid + 1];
            } else {
                next = Integer.MIN_VALUE;
            }

            if(prev<nums[mid] && next<nums[mid]){
                return mid;
            }
            else if(next<nums[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return 0;
    }
}