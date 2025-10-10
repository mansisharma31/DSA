class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start = 1;
        int end = *max_element(nums.begin(),nums.end());
        int sum=0;
        int ans=0;
        while(start<=end){
            int mid = start+(end-start)/2;
            int sum=0;
            for(int i=0; i<nums.size(); i++){
                sum = sum + ((nums[i]+mid-1)/mid);
            }
            if(sum>threshold){
                start=mid+1;
            }
            else{
                ans=mid;
                end=mid-1;
            }
            
        }
        return ans;
    }

};