class Solution {
    public:
        int minEatingSpeed(vector<int>& piles, int h) {
            int start = 0, end = 0, mid, ans, n = piles.size();
            long long sum = 0;
            
            // Calculate the total number of bananas and the maximum pile size
            for (int i = 0; i < n; i++) {
                sum += piles[i];
                end = max(end, piles[i]);
            }
            
            // Set the starting point for binary search
            start = sum / h;
            if (start == 0) start = 1; // Ensure start is at least 1
            
            // Binary search to find the minimum eating speed
            while (start <= end) {
                mid = start + (end - start) / 2;
                int totalTime = 0;
                
                // Calculate total time required to eat all piles at speed 'mid'
                for (int i = 0; i < n; i++) {
                    totalTime += piles[i] / mid;
                    if (piles[i] % mid != 0) totalTime++;
                }
                
                // Adjust the search range based on the total time
                if (totalTime > h) {
                    start = mid + 1;
                } else {
                    ans = mid;
                    end = mid - 1;
                }
            }
            
            return ans;
        }
    };