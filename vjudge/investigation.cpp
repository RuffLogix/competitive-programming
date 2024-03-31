#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

vector<int> num;
bool visited[12][101][101][2];
int dp[12][101][101][2];
int K;

int solve(int idx, int a, int b, bool check) {
    if (idx==num.size()) return (a==0 && b==0);
    if (visited[idx][a][b][check]) return dp[idx][a][b][check];

    visited[idx][a][b][check] = true;
    
    int digit = check ? 9 : num[idx];
    int ans = 0;
    for (int i=0; i<=digit; i++) {
        ans += solve(idx+1, (a+i)%K, (b*10+i)%K, check || (i<num[idx]));
    }
    return dp[idx][a][b][check] = ans;
}

int query(int x) {
    num.clear();
    while (x) {
        num.push_back(x%10);
        x /= 10;
    }
    reverse(num.begin(), num.end());
    memset(dp, 0, sizeof(dp));
    memset(visited, false, sizeof(visited));
    return solve(0, 0, 0, false);
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int t; 
    cin >> t;

    for (int i=1; i<=t; i++) {
        int a, b;
        cin >> a >> b >> K;
        if (K>100) {
            cout << "Case " << i << ": " << 0 << '\n';
            continue;
        }
        cout << "Case " << i << ": " << query(b) - query(a-1) << '\n';
    }

    return 0;
}