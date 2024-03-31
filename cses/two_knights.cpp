#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int n; cin >> n;

    for (int i=1; i<=n; i++) {
        long long ans = (long long) i*i*(i*i-1)/2 - 4*(i-1)*(i-2);
        cout << ans << '\n';
    }

    return 0;
}