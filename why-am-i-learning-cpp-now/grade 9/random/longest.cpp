#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n, S;
    cin >> n >> S;
    int a[n + 1];
    for (int i = 0; i < n; ++i) cin >> a[i];

    int max_len = 0, sum = 0, left = 0;
    for (int right = 0; right < n; ++right) {
        sum += a[right];
        while (sum > S && left <= right) {
            sum -= a[left++];
        }
        max_len = max(max_len, right - left + 1);
    }

    cout << max_len;
    return 0;
}

