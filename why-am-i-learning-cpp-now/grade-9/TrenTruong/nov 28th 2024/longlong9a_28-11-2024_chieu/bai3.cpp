#include "iostream"
using namespace std;
#define maxN 3000000
int n, k, res = 0, cnt[maxN + 5], a[maxN + 5];
int main()
{
  cin >> n >> k;
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  for (int i = 0; i < n; i++){
    res += cnt[k - a[i]];
    cnt[a[i]]++;
  }
  cout << res;
}