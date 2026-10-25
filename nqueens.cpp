#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> board;
vector<vector<string>> sols;
vector<bool> col, d1, d2;

void solve(int r) {
    if (r == n) { sols.push_back(board); return; }
    for (int c = 0; c < n; c++) {
        if (col[c] || d1[r + c] || d2[r - c + n - 1]) continue;
        board[r][c] = 'Q';
        col[c] = d1[r + c] = d2[r - c + n - 1] = true;
        solve(r + 1);
        board[r][c] = '.';
        col[c] = d1[r + c] = d2[r - c + n - 1] = false;
    }
}

int main() {
    cin >> n;
    board.assign(n, string(n, '.'));
    col.assign(n, false);
    d1.assign(2 * n, false);
    d2.assign(2 * n, false);
    solve(0);
    cout << "Total solutions: " << sols.size() << "\n\n";
    for (auto &b : sols) {
        for (auto &row : b) cout << row << "\n";
        cout << "\n";
    }
}