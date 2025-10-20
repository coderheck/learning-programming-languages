#include "iostream"
#include <algorithm>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(p, p + n);

    int i = 0, j = n - 1, used = 0, remainder = n;
    while (i < j) {
        if (p[i] + p[j] <= x) {
            used++;
            remainder -= 2;
            i++;
            j--;
        } else {
            j--;
        }
    }

    cout << used + remainder;
}