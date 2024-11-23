#include"stdio.h"
#include"string"
using namespace std;
#define ull unsigned long long
#define MOD 1000000007
#define maxN 100000
#define p 101
string s;int q,n;char str[maxN+1];
ull pref[maxN+1],suff[maxN+1],pows[maxN+1];
bool ispl(int l,int r){
  while(r>l){
    if(s[l++]!=s[r--]){return false;}
  }
  return true;
}
ull fastpowmod(ull a,ull b){
  if(a==0){return 1;}
  if(b==1){return a;}
  ull temp=fastpowmod(a,b/2);
  if(b%2==0)
    return(temp%MOD*temp%MOD)%MOD;
  else
    return(
      ((temp%MOD * temp%MOD)%MOD) * a%MOD
    ) % MOD;
}
ull modMulInv(ull n){return fastpowmod(n,MOD-2);}
void prefixHash(){
  pref[0] = 0;
  pref[1] = s[0];
  for (int i = 2; i <= n; i++)
    pref[i] = (
      pref[i - 1] % MOD + (s[i - 1] % MOD * pows[i - 1] % MOD) % MOD
    ) % MOD;
}
void suffixHash(){
  suff[0] = 0;
  suff[1] = s[n - 1];
  for (int i = n - 2, j = 2; i >= 0 && j <= n; i--, j++)
    suff[j] = (
      suff[j-1]%MOD + (s[i]%MOD * pows[j-1]%MOD) % MOD
    ) % MOD;
}
void computepows(){
  pows[0]=1;
  for (int i=1;i<=n;i++)
    pows[i]=(pows[i-1]%MOD*p%MOD)%MOD;
}
void parse(){
  for(int i=1;i<=q;i++){
    int l,r;scanf("%d%d",&l,&r);
    l--;r--;
    ull forwardHash = (
      (pref[r+1]-pref[l]+MOD) % MOD * modMulInv(pows[l]) % MOD
    ) % MOD;
    ull backwardsHash = (
      (suff[n-l]-suff[n-r-1]+MOD) % MOD * modMulInv(pows[n-r-1]) % MOD
    ) % MOD;
    if(forwardHash==backwardsHash){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
}
int main(){
  scanf("%[^\n]s",str);
  scanf("%d",&q);
  s=str;n=s.size();
  computepows();prefixHash();suffixHash();
  parse();
}

/*
abccbabccdcdcd
5 1 6 5 7 8 12 4 9 10 14
YES
YES
NO
NO
YES
*/

// 