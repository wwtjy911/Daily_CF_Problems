#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int mod = 1e9 + 7;
    int n;
    cin >> n;
    vector<int> dp(n+1, 0);
    vector<int>p(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }
    for (int i = 1; i <= n; i++) {
    dp[i] = 2;
    if (p[i] != i) dp[i] += dp[i - 1] - dp[p[i] - 1];
    dp[i] %= mod;
    dp[i] += mod;
    dp[i] %= mod;
    dp[i] += dp[i - 1];
    dp[i] %= mod;
    }

    cout << dp[n];
	return 0;
}
