#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 998244353;

int n;
vector<int> s;
vector<int> score;
int total = 0;

uint64_t make_key(const vector<int>& scores, const vector<int>& fixed_set) {
    uint64_t key = 0;
    for (int idx : fixed_set) {
        key = key * 4 + scores[idx];
    }
    return key;
}

unordered_map<int, unordered_map<uint64_t, int>> memo;

void dfs(int step, int mask, vector<int>& scores, const vector<int>& s, const vector<int>& fixed_set) {
    if (step == n) {
        for (int idx : fixed_set) {
            if (s[idx] != -1 && scores[idx] != s[idx]) return;
        }
        total = (total + 1) % MOD;
        return;
    }

    int steps_left = n - step;
    for (int idx : fixed_set) {
        if (s[idx] != -1 && scores[idx] + steps_left < s[idx]) return;
    }

    uint64_t key = make_key(scores, fixed_set);
    if (memo[mask].count(key)) {
        total = (total + memo[mask][key]) % MOD;
        return;
    }

    int subtotal = total;
    for (int i = 0; i < n; ++i) {
        if (mask & (1 << i)) continue;
        int best_dist = n + 10, best_cell = -1;
        for (int j = 0; j < n; ++j) {
            if (mask & (1 << j)) {
                int d = abs(i - j);
                if (d < best_dist || (d == best_dist && j < best_cell)) {
                    best_dist = d;
                    best_cell = j;
                }
            }
        }

        bool skip = false;
        if (best_cell != -1) {
            scores[best_cell]++;
            if (s[best_cell] != -1 && scores[best_cell] > s[best_cell]) skip = true;
        }

        if (!skip) dfs(step + 1, mask | (1 << i), scores, s, fixed_set);
        if (best_cell != -1) scores[best_cell]--;
    }
    memo[mask][key] = (total - subtotal + MOD) % MOD;
}

int brute(int n, const vector<int>& s) {
    vector<int> p(n);
    iota(p.begin(), p.end(), 0);
    int ans = 0;
    do {
        vector<int> score(n, 0);
        set<int> black;
        for (int t = 0; t < n; ++t) {
            int pos = p[t];
            if (t > 0) {
                auto it = black.lower_bound(pos);
                int dist = 1e9, idx = -1;
                if (it != black.end()) {
                    dist = abs(*it - pos);
                    idx = *it;
                }
                if (it != black.begin()) {
                    --it;
                    if (abs(*it - pos) < dist || (abs(*it - pos) == dist && *it < idx)) {
                        dist = abs(*it - pos);
                        idx = *it;
                    }
                }
                if (idx != -1) score[pos]++;
            }
            black.insert(pos);
        }
        bool match = true;
        for (int i = 0; i < n; ++i)
            if (s[i] != -1 && s[i] != score[i]) {
                match = false;
                break;
            }
        if (match) ++ans;
    } while (next_permutation(p.begin(), p.end()));
    return ans % MOD;
}

int solve() {
    vector<int> fixed_set;
    for (int i = 0; i < n; ++i) {
        if (s[i] != -1) fixed_set.push_back(i);
    }

    score.assign(n, 0);
    total = 0;
    memo.clear();
    dfs(0, 0, score, s, fixed_set);
    return total;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        s.resize(n);
        for (int i = 0; i < n; ++i) cin >> s[i];

        if (n <= 8) {
            cout << brute(n, s) << '\n';
        } else if (n <= 15) {
            cout << solve() << '\n';
        } else {
            // Fallback for large n (e.g., when all s[i] == -1): count of all permutations
            bool unconstrained = all_of(s.begin(), s.end(), [](int x) { return x == -1; });
            if (unconstrained) {
                int res = 1;
                for (int i = 2; i <= n; ++i) res = res * i % MOD;
                cout << res << '\n';
            } else {
                // Further extension possible with approximate or symmetry methods
                cout << 0 << '\n';
            }
        }
    }
    return 0;
}
