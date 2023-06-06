#include <bits/stdc++.h> 

int maximumProfit(vector<int> &prices){
    // Write your code here.
    int prev = 0, next = 1, maxProfit = 0;

    while(next < prices.size()) {
        int currentProfit = prices[next] - prices[prev];

        if(prices[prev] < prices[next])
            maxProfit = max(currentProfit, maxProfit);
        else
            prev = next;

        next++;
    }

    return maxProfit;
}
