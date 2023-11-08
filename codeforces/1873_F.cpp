#include <iostream>
#include <deque>

using namespace std;

struct Tree {
    int a, h;

    Tree () { }
    Tree (int a, int h) { }
};

Tree trees[200001];
deque<int> dq;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int t; cin >> t;

    while (t--) {
        int n, k; cin >> n >> k;
        while (!dq.empty()) dq.pop_front();

        for (int i=0; i<n; i++) cin >> trees[i].a;
        for (int i=0; i<n; i++) cin >> trees[i].h;

        int ans=0;
        int sum=0;
        for (int i=0; i<n; i++) {
            while (!dq.empty() && (trees[dq.back()].h%trees[i].h!=0 || trees[i].a+sum>k)) {
                sum -= trees[dq.front()].a;
                dq.pop_front();
            }

            if (trees[i].a<=k) {
                dq.push_back(i);
                sum += trees[i].a;
            }
            ans = max(ans, (int) dq.size());
        }
        cout << ans << '\n';
    }

    return 0;
}