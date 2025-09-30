#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
const int MXN = 1e5 + 5;
kien n, a[10000];

struct KBB {
    kien cur, left, right, maxx;
};
KBB st[MXN];



JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build (1 ,1 ,n);
    kien t, x ,y;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> x >> y;
        KBB vtr = get(1, x, y, 1 , n);
        cout << vtr.maxx << "\n";
    }
}



/// 0 - 800 hieu mot chut
/// 800 - 1200 trong doi tuyen
/// 1200 - 1600 QG
/// 1600 - 2000 QG
/// 2000 - 2200 top 1 top 2
/// 2200 -> 4000


/// string s;
/// ASCII =>
/// hash
