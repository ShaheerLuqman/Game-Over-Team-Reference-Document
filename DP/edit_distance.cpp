
int dp[n + 1][m + 1];
memset(dp, 0, sizeof(dp));

for (int i = 0; i <= n; i++)
{
    dp[i][0] = i;
}
for (int j = 0; j <= m; j++)
{
    dp[0][j] = j;
}

for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= m; j++)
    {

        char x = a[i - 1];
        char y = b[j - 1];

        if (x == y)
        {
            dp[i][j] = dp[i - 1][j - 1];
        }
        else
        {
            // remove char from a
            dp[i][j] = dp[i - 1][j] + 1;

            // add char to a
            dp[i][j] = min(dp[i][j], dp[i][j - 1] +
                                         1);

            // replace char
            dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + 1);
        }
    }
}