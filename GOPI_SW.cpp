#include <iostream>
#include <string>
using namespace std;
long long t,dp[1000001];
#define MOD 1000000007
void solve()
{
    dp[2] = 2;
    dp[3] = 6;
    for(int i = 4;i <= 1000000;i++)
    {
        dp[i] = (dp[i-1]*(dp[i-1]+1)) % MOD;
    }
}
int main()
{
    int n;

    cin >> t;
    solve();
    while(t--)
    {
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}
