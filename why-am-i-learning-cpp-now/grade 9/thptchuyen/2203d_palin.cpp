#include"stdio.h"
#include"string.h"
#define ull unsigned long long
const ull MOD=1000000007;
const int maxN=100000;
const int p=101;
struct Q{int L,R;}a[maxN+1];
int q,n;char s[maxN+1];
ull pref[maxN+1],suff[maxN+1],pows[maxN+1];
ull fastpowmod(ull a,ull b){
  ull res=1;a%=MOD;
  if(a==0){return 0;}
  while(b>0){
    if(b&1){res=(res*a)%MOD;}
    b>>=1;a=(a*a)%MOD;
  }
  return res;
}
ull modMulInv(ull n){return fastpowmod(n,MOD-2);}
void prefixHash(){
  pref[0] = 0;
  pref[1] = s[0];
  for(int i=2;i<=n;i++)
    pref[i] = (
      pref[i-1]%MOD + (s[i-1]%MOD * pows[i-1]%MOD) % MOD
    ) % MOD;
}
void suffixHash(){
  suff[0] = 0;
  suff[1] = s[n - 1];
  for (int i=n-2,j=2;i>=0&&j<=n;i--,j++)
    suff[j] = (
      suff[j-1]%MOD + (s[i]%MOD * pows[j-1]%MOD)%MOD
    ) % MOD;
}
void computepows(){
  pows[0]=1;
  for (int i=1;i<=n;i++)
    pows[i]=(pows[i-1]%MOD*p%MOD)%MOD;
}
void parse(){
  for(int i=0;i<q;i++){
    int l=a[i].L-1,r=a[i].R-1;
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
  scanf("%[^\n]s",s);
  scanf("%d",&q);
  for(int i=0;i<q;i++){
    scanf("%d%d",&a[i].L,&a[i].R);
  }
  n=strlen(s);
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

// I LOVE YOU SO MUCH STRINGS AUHUAGAHUGAHHU IMBATUKAMMMMM AHHHHHHHH