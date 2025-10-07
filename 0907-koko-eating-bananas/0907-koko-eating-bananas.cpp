class Solution {
public:

    int maximum(vector<int>& piles){
        int maxi=INT_MIN;
        for(int i=0; i<piles.size(); i++){
            maxi=max(piles[i],maxi);
        }
        return maxi;
    }

    double calcHours(vector<int>& piles, int hourly){
        double totalHrs = 0;
        for(int i=0; i<piles.size(); i++){
            totalHrs += ceil(double(piles[i])/double(hourly));
        }
        return totalHrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = maximum(piles);

        while(start<=end){
            int mid = start+(end-start)/2;
            double totalHrs = calcHours(piles, mid);
            if(totalHrs <= h){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return start;
    }
};