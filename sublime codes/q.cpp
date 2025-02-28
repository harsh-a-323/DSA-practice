#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> g(n, vector<int>(n));
        vector<pair<int, int>> degrees(n);

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                char ch;
                cin >> ch;
                g[i][j] = ch - '0';
            }
        }

        for (int i = 0; i < n; ++i) {
            int degree = 0;
            for (int j = 0; j < n; ++j) {
                degree += g[i][j];
            }
            degrees[i] = {degree, i + 1};
        }

        sort(degrees.rbegin(), degrees.rend());
        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            p[degrees[i].second - 1] = i + 1;
        }

        for (int i = 0; i < n; ++i) {
            cout << p[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
