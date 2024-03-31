#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int n; cin >> n;

    if (n%4 == 1 || n%4 == 2) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        if (n%4 == 0) {
            cout << n/2 << '\n';
            for (int i=1; i<=n; i++) {
                if (i%4 == 1 || i%4 == 0) cout << i << ' ';
            }
            cout << '\n' << n/2 << '\n';
            for (int i=1; i<=n; i++) {
                if (i%4 == 2 || i%4 == 3) cout << i << ' ';
            }
        } else {
            cout << n/2+1 << '\n';
            for (int i=1; i<=n; i++) {
                if (i<=2 || (i>=4 && (i%4==0 || i%4==3))) cout << i << ' ';
            }
            cout << '\n' << n/2 << '\n';
            for (int i=1; i<=n; i++) {
                if (!(i<=2 || (i>=4 && (i%4==0 || i%4==3)))) cout << i << ' ';
            }
        }
    }

    return 0;
}