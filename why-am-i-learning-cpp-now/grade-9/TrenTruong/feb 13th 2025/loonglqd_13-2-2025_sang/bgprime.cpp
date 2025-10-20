#include <iostream>
#include <vector>
using namespace std;
#define maxN 2000000
int l,r,minp[maxN+5],cnt[maxN+5];long long res=0;bool pr[maxN + 5];
void preproc() {
  for(int i=2;i<=maxN;i++){
    if(!pr[i]){
      minp[i]=i;
      for(int j=i*2;j<=maxN;j+=i){
        if(!pr[j]){pr[j]=true;minp[j]=i;}
      }
    }
  }
}
int main(){
  preproc();
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>l>>r;
  for(int i=0;i<=maxN;i++){cnt[i]=0;}
  for(int i=l;i<=r;i++){
    int x=i,p=1,l=0;
    while(x>1){
      if(minp[x]!=l){p*=minp[x];l=minp[x];}
      x/=minp[x];
    }
    cnt[p]++;
  }
  for(int i=0;i<=maxN;i++){
    if(cnt[i]>=2){
      res+=(long long)cnt[i]*(cnt[i]-1)/2;
    }
  }
  cout << res;
  return 0; 
}