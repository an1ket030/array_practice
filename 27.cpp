//Best time tobuy and sell stocks V, according to K value

class Solution {
public:
    long long maximumProfit(vector<int>& prices, int k) {
        int n = prices.size();
        if (n < 2) return 0;
        
        vector<long long> dp(n, 0);
        vector<long long> next_dp(n, 0);
        
        for (int t = 1; t <= k; ++t) {
            long long max_diff = -2e18; // Max of (dp[j-1] - prices[j])
            long long max_sum = -2e18;  // Max of (dp[j-1] + prices[j])
            
            next_dp[0] = 0; // Cannot complete a transaction on day 0
            
            for (int i = 1; i < n; ++i) {
                // Update running maximums with the new start candidate j = i-1.
                // We use dp[i-2] because the previous transaction must end strictly before j.
                long long prev_profit = (i >= 2) ? dp[i-2] : 0;
                
                max_diff = max(max_diff, prev_profit - prices[i-1]);
                max_sum = max(max_sum, prev_profit + prices[i-1]);
                
                // 1. End transaction at i (Normal or Short)
                long long profit_end_i = max(prices[i] + max_diff, -prices[i] + max_sum);
                
                // 2. Do nothing at i
                next_dp[i] = max(next_dp[i-1], profit_end_i);
            }
            dp = next_dp;
        }
        
        return dp[n-1];
    }
};