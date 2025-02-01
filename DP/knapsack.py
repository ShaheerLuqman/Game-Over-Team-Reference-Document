def kProfit(W, N, wt, pr, dp):
    if N == 0 or W == 0:
        return 0
    if dp[N][W] is not None:
        return dp[N][W]
    if wt[N - 1] <= W:
        dp[N][W] = max(
            pr[N - 1] + kProfit(W - wt[N - 1], N - 1, wt, pr, dp),
            kProfit(W, N - 1, wt, pr, dp),
        )
        return dp[N][W]
    else:
        dp[N][W] = kProfit(W, N - 1, wt, pr, dp)
        return dp[N][W]
# define DP array
dp = [[None] * (W + 1) for _ in range(N + 1)]
maxProfit = kProfit(W, N, wt, pr, dp)
