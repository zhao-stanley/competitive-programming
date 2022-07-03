//Leetcode 121. Best Time to Buy and Sell Stock (Easy)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int left = 0;
        int right = 1;
        int maxProfit = 0;
        while (right < prices.size()){
            if (prices[left] < prices[right]){
                maxProfit = max(maxProfit, prices[right] - prices[left]);
            } else {
                left = right;
            }
            right++;
        }
        return maxProfit;
    }
};

/*

Line 6&7 decrease compilation time for some reason (secondary effect, may or may not happen)

Method of approach is the two pointers method
Left = buy, right = sell

While the right pointer hasn't reached the end (last day), we're going to check if the buy price is less than the sell price
    - if the buy price is less than the sell price (this means we can make profit), we will set maxProfit to be whichever is bigger:
        - the previous calculated maxProfit or the current profit calculation (the current right - left)
            - if it's the current right - left that is more profitable, we will set maxProfit to that
    - if the buy price is greater than the sell price, we will keep shifting the left and right pointer until there is profit (or we reach the end)

if we reach the end and there is no profit, return the default maxProfit, which was initialized at 0

*/