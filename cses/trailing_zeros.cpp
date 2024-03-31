#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int n; cin >> n;
    int ans = 0;

    while (n) {
        ans += n/5;
        n /= 5;
    }

    cout << ans << '\n';

    return 0;
}