class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double n = nums1.size();
        double m = nums2.size();
        vector<int> merged(n+m);

        double i=0, j=0, k=0;
        while(i<n && j<m){
            if(nums1[i]<=nums2[j]){
                merged[k]=nums1[i];
                k++;
                i++;
            }
            else{
                merged[k]=nums2[j];
                k++;
                j++;
            }
        }
        while(i<n){
            merged[k]=nums1[i];
            k++;
            i++;
        }
        while(j<m){
            merged[k]=nums2[j];
            k++;
            j++;
        }

        int size = merged.size();
        double median;
        if (size % 2 == 0)
            median = (merged[size/2 - 1] + merged[size/2]) / 2.0;
        else
            median = merged[size/2];
            return median;
    }
};