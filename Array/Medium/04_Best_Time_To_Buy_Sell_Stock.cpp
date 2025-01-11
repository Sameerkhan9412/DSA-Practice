class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //this is brute force method: and out out 212 test ,runs only 202
        // int maxi=INT_MIN;
        // for(int i=prices.size()-1;i>0;i--){
        //     for(int j=i-1;j>=0;j--){
        //         if(prices[i]-prices[j]>maxi){
        //             maxi=prices[i]-prices[j];
        //         }
        //     }
        // }

        // if(maxi<=0){
        //     return 0;
        // }
        // else{
        //     return maxi;
        // }

        // optimal->i-1th index track then problem will be solve
        int mini = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            int cost = prices[i] - mini;  // Calculate the potential profit by selling at prices[i]
            maxProfit = max(maxProfit, cost);  // Update maxProfit if the current cost is higher
            mini = min(mini, prices[i]);  // Update mini to the minimum price seen so far
        }

        return maxProfit;
    }
};