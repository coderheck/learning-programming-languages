#include "iostream"
using namespace std;
#define ll long long
#define maxN 100000
int n, m;
ll a[maxN + 5], pos[10000005];
int main()
{
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (pos[a[i] - m] != 0)
    {
      cout << pos[a[i] - m] << " " << i + 1;
      exit(0);
    }
    if (pos[a[i]] == 0)
    {
      pos[a[i]] = i + 1;
    }
    pos[a[i]] = i + 1;
  }
  cout << -1;
}