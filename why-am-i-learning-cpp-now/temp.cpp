#include"stdio.h"
#include"unordered_map"
#include"vector"
using namespace std;
#define ll long long
int n,res=0,mod[10000005];
ll a[1000005],k;
void get_count() {
  mod[0] = 1;
  int pref_sum = 0;
  for (ll elem : a) {
    pref_sum += elem;
    pref_sum %= k;
    mod[pref_sum]++;
  }
  long long res = 0;
  for (int cock = 0; cock < k; cock++)
    res += (long long)mod[cock] * (mod[cock] - 1) / 2;
  printf("%lld",res);
}
int main(){ 
  scanf("%d%lld",&n,&k);
  for(int i=0;i<n;i++){scanf("%lld",&a[i]);}
  get_count();
}
