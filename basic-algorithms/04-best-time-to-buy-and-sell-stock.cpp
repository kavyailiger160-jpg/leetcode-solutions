#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            int profit = prices[i] - minPrice;

            if (profit > maxProfit)
                maxProfit = profit;

            if (prices[i] < minPrice)
                minPrice = prices[i];
        }

        return maxProfit;
    }
};

int main() {
    Solution solution;

    // Test Case 1
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};

    cout << "Test Case 1: "
         << solution.maxProfit(prices1) << endl;

    // Test Case 2 - Edge case
    vector<int> prices2 = {7, 6, 4, 3, 1};

    cout << "Test Case 2: "
         << solution.maxProfit(prices2) << endl;

    return 0;
}