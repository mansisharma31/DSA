class Solution {
public:

    int maxi(vector<vector<int>>& mat, int rowSize, int col){
        int maxel = -1;
        int index = -1;
        for(int i=0; i<rowSize; i++){
            if(mat[i][col] > maxel){
                maxel = mat[i][col];
                index = i;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        int start = 0;
        int end = col-1;

        while(start<=end){
            int mid = start+(end-start)/2;
            int maxrow = maxi(mat, row, mid);
            int left = -1;
            if(mid-1 >= 0){
                left = mat[maxrow][mid-1];
            }
            int right = -1;
            if(mid+1 < col){
                right = mat[maxrow][mid+1];
            }
            if(mat[maxrow][mid]>left && mat[maxrow][mid]>right){
                return {maxrow,mid};
            }
            else if(mat[maxrow][mid]<left){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return {-1,-1};
    }
};