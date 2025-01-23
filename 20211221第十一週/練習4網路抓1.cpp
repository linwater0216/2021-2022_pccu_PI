//https://yuihuang.com/dp-lcs/
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
 
const int maxn=1005;
string s1, s2;
int dp[maxn][maxn];
 
int main() {
    int l1, l2;
    while (cin >> s1 >> s2) {
        l1 = (int)s1.length();
        l2 = (int)s2.length();
        memset(dp, 0, sizeof(dp));
        for (int i=1; i<=l1; i++) {
            for (int j=1; j<=l2; j++) {
                if (s1[i-1] == s2[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
        cout << dp[l1][l2] << endl;
    }
    return 0;
}
