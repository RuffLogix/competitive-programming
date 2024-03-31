#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int t; cin >> t;

    while (t--) {
        int a, b; cin >> a >> b;
        int mx_ab = max(a, b);
        int mn_ab = min(a, b);
        if ((mx_ab*2 - mn_ab)%3==0 && mx_ab/2 <= mn_ab) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}