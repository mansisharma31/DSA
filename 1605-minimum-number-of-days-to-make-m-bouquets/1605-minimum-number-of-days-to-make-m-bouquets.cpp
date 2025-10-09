class Solution {
public:

    bool canMake(vector<int>& arr, int mid, int m, int k) {
        int count = 0, bouquets = 0;
        for (int day : arr) {
            if (day <= mid) {
                count++;
                if (count == k) {
                    bouquets++;
                    count = 0;
                }
            } else count = 0;
        }
        return bouquets >= m;
    }

    int minDays(vector<int>& arr, int m, int k) {
        long long total = 1LL * m * k;
        if (arr.size() < total) return -1;

        int low = *min_element(arr.begin(), arr.end());
        int high = *max_element(arr.begin(), arr.end());
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canMake(arr, mid, m, k)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};