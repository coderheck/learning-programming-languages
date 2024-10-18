#include <bits/stdc++.h>
#define int long long
#define Mx 1e4
using namespace std;
bool ktnt(int x)
{
  for (int i = 1; i * i < x; i++)
    if (x % i == 0)
      return 0;
  return 1;
}
bool SNT[Mx + 5];
void sangnt()
{
  SNT[1] = 0;
  SNT[0] = 0;
  for (int i = 2; i <= Mx; i++)
    SNT[i] == 1;
  for (int i = 2; i * i < Mx; i++)
    if (SNT[i])
      for (int j = i * i; j <= Mx; j += i)
        SNT[j] = 0;
}
int sodep(int x)
{
  int s = 0,count=0;
  while(count<=x)
  {
    
  }
}
int main()
{
}