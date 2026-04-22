class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        int start = 0;
        int end = letters.length -1;
        int n = letters.length;

        while(start<=end){
            int mid = start + (end-start)/2;

            if(letters[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;   
            }
            // else{
            //    return letters[mid];
            //}
        }
        return letters[start%n];
    }
}