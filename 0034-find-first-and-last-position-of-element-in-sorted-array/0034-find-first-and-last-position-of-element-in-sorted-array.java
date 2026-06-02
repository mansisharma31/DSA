class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] ans = {-1,-1};
        int left = binarySearch(nums, target, true);
        int right = binarySearch(nums, target, false);

        ans[0]=left;
        ans[1]=right;

        return ans;
    }

    int binarySearch(int[] arr, int target, boolean findStartIndex){
        int start = 0; 
        int end = arr.length - 1;
        int ans = -1;
        
        while(start<=end){
            int mid = start + (end-start)/2;

            if(arr[mid] < target){
                start = mid+1;
            }
            else if(arr[mid] > target){
                end = mid-1;
            }
            else{
                ans = mid;
                if(findStartIndex){
                    end = mid-1;
                }
                else{
                    start = mid+1;
                }
            }
        }
        return ans;
    }
}