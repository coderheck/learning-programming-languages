#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long 
const ll maxN = 100000;
struct card { ll id, val; };
ll n; card a[maxN + 5];
int main() {
  cin.tie(0) -> sync_with_stdio(false);
  cin >> n;
  for (ll i = 1; i <= n; i++) {
    cin >> a[i].val;
    a[i].id = i;
  }
  for (ll i = 1; i < n; i++) {
    if( max(a[i].val, a[i+1].val) == a[i].val) {
      cout << a[i].id << "\n";
      a[i] = a[i + 1];
    } else {
      cout << a[i + 1].id << "\n";
      a[i + 1] = a[i];
    }
  }
}
