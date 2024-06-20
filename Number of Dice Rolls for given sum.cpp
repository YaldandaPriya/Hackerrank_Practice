#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int MOD = 1e9 + 7;
const int MAXN = 100000;

int main() {
    vector<int> dp(MAXN + 1, 0);
    dp[0] = 1; 

    for (int i = 1; i <= MAXN; ++i) {
        for (int j = 1; j <= 6; ++j) {
            if (i >= j) {
                dp[i] = (dp[i] + dp[i - j]) % MOD;
            }
        }
    }
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        cout << dp[N] << endl;
    }

    return 0;
}
