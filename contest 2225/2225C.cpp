#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
//dp tab initial korlam
        vector<int> dp(n + 1, 1e9);
        dp[0] = 0;

        for (int i = 1; i <= n; ++i)
        {
            int cost_v = (s1[i - 1] == s2[i - 1] ? 0 : 1);
            dp[i] = min(dp[i], dp[i - 1] + cost_v);

            if (i >= 2)
            {
                int cost_h = (s1[i - 2] == s1[i - 1] ? 0 : 1) + (s2[i - 2] == s2[i - 1] ? 0 : 1);
                dp[i] = min(dp[i], dp[i - 2] + cost_h);
            }
        }
//kortesi print
        cout << dp[n] << endl;
    }
    return 0;
}
