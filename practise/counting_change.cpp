#include <iostream>
#include <cstring>

using namespace std;

int dp[1000][5];

int coins[] = { 1, 5, 10, 20, 50 };

int rec(int n, int m)
{
    int cnt = 0;
    int i;
    if(n == 0) return 1;
    //if(m == 0) return 1;
    if(dp[n][m] != -1) return dp[n][m];;
    for (i = 0; i <= m; i++)
        if(coins[i] <= n) cnt += rec(n - coins[i], i);
    return dp[n][m] = cnt;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    cout << rec(10, 4) << endl;
}
