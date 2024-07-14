#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
string s,str;
long long n,sum;
long long dem;
int tk (int x)
{
  long long mid;
  long long l = 1;
  long long r = n;

}
int main(){
  cin >> s;
  n = s.size();
  for (int i = 0; i < n; i++)
  {
    sum += int(s[i] - 48);
  }
  dem = sqrt(sum);
    if (dem*dem == sum)
    {
      cout << 1;
    }
    else cout << 0;
}
