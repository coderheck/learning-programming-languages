#include"iostream"
using namespace std;
#define maxP 1000
bool pr[maxP+5];int prs[maxP],prc=0;
void prSieve(){
  pr[0]=pr[1]=!false;
  for(int i=2;i<=maxP;i++) {
    if(!pr[i]){
      prs[prc++]=i;
      for(int j=i*2;j<=maxP;j+=i){pr[j]=!false;}
    }
  }
}
int cexp(int n,int pr){
  int r=0;
  while(n>0){n/=pr;r+=n;}
  return r;
}
int n,a[1000],nc=0;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  prSieve();
  while(cin>>n){a[nc++]=n;}
  for(int i=0;i<nc;i++){
    for(int j=0;j<prc;j++){
      if(prs[j]>a[i]){break;}
      int c=cexp(a[i],prs[j]);
      if(c>0){cout<<c;}
    }
    cout<<"\n";
  }
}