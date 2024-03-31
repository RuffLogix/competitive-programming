#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int n; cin >> n;
    int ans = 1;

    while (n--) {
        ans = (ans*2)%((int)1e9+7);
    }

    cout << ans << '\n';

    return 0;
}