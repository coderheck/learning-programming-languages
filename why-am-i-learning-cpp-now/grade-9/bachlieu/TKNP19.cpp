#include <bits/stdc++.h>
using namespace std;
#define kien long long
kien maxx;
kien s,n,t[25];

bool ktr(kien mid)
{
  kien cake = 0;
  for (int i = 1; i <= n; i++)
  {
    cake += mid / t[i];
  }
  if (cake >= s)
  {
    return true;
  }
  else
  {
    return false;
  }
}

kien tknp()
{
  kien l = 1, r = s * maxx;
  kien mid, kq = -1;
  while (l <= r)
  {
    mid = (l + r) / 2;
    if (ktr(mid))
    {
      r = mid - 1;
      kq = mid;
    }
    else
    {
      l = mid + 1;
    }
  }
  cout << kq;
}

int main()
{
  cin >> s >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> t[i];
    maxx = max(maxx, t[i]);
  }
  tknp();
}