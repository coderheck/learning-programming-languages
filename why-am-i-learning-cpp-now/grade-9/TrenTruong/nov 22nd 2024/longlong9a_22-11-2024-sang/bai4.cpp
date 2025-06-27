#include "iostream"
#include "string"
using namespace std;
int k, pos = 0;
string s, d = "", res = "";
void firstD()
{
  while (d[0] == '0')
  {
    d.erase(0, 1);
  }
  char mind = d[0];
  for (int i = 1; i <= d.size() - k; i++)
  {
    if (d[i] < mind && d[i] != '0')
    {
      mind = d[i];
      pos = i;
    }
  }
  res += mind;
}
void nextD()
{
  for (int i = k - 1; i > 0; i--)
  {
    pos++;
    char mind = d[pos];
    for (int i = pos; i <= d.size() - i; i++)
    {
      if (d[i] < mind)
      {
        mind = d[i];
        pos = i;
      }
    }
    res += mind;
  }
}
int main()
{
  cin >> k;
  cin >> s;
  for (char c : s)
  {
    if (c >= '0' && c <= '9')
    {
      d += c;
    }
  }
  firstD();
  nextD();
  cout << res;
}