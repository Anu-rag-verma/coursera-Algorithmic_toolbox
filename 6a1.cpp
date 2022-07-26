#include <bits/stdc++.h>
using namespace std;
int knapSack(int W, vector<int> wt[])
{
    // making and initializing dp array
    int dp[W + 1];
    memset(dp, 0, sizeof(dp));

    for (int i = 1; i < wt.size() + 1; i++) {
        for (int w = W; w >= 0; w--) {

            if (wt[i - 1] <= w)
                // finding the maximum value
                dp[w] = max(dp[w],
                            dp[w - wt[i - 1]] + wt[i - 1]);
        }
    }
    return dp[W]; // returning the maximum value of knapsack
}

int main() {
  int n, W;
  std::cin >> W >> n;
  vector<int> wt(n);
  for (int i = 0; i < n; i++) {
    std::cin >> wt[i];
  }
  std::cout << optimal_weight(W, wt) << '\n';
}