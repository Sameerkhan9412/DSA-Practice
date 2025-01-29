class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1, end = *max_element(piles.begin(), piles.end());
        int ans = end;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            long long total_time = 0;

            for (int pile : piles) {
                total_time += (pile + mid - 1) / mid; // Equivalent to ceil(pile / mid)
            }

            if (total_time > h) {
                start = mid + 1; // Need a higher speed
            } else {
                ans = mid; // Try a lower speed
                end = mid - 1;
            }
        }

        return ans;
    }
};
