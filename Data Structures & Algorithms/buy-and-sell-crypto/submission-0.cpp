class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        for(int i=0; i<n; i++){
            int j = i+1;
            while(j<n){
                int maxi = prices[j] - prices[i];
                profit = max(profit, maxi);
                j++;
            }
        }
        return profit;
    }
};
