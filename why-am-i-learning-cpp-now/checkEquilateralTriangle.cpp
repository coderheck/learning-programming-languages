#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll c1, c2, c3;


int main() {
    cin >> c1 >> c2 >> c3;
    if (c1 == c2 and c1 == c3 and c2 == c3) {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}
// test passed gg