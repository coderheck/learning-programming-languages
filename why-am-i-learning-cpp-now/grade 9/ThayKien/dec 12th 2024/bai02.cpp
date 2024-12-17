#include"iostream"
using namespace std;
#define maxN 1000000
int n,a[1000005],prc=0;
bool pr[maxN+5],cnt[maxN+5];
void prSieve(){
  for(int i=2;i<=maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
int main(){
  prSieve();
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
    cnt[a[i]]=1;
    prc+=pr[a[i]];
  }
  cout<<prc<<"\n";
  for(int i=1;i<=maxN;i++){
    if(cnt[i]==0){cout<<i;return 0;}
  }
}