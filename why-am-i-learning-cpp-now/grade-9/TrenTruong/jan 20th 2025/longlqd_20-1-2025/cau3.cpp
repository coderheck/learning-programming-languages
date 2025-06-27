#include"iostream"
using namespace std;
int q,a,b;
#define maxP 10000000
bool pr[maxP+5];int cnt[maxP+5];
void prSieve(){
  pr[0]=pr[1]=!false;cnt[0]=cnt[1]=0;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=!false;}
    }
  }
  for(int i=2;i<=maxP;i++){cnt[i]=cnt[i-1]+(!pr[i]);}
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  prSieve();
  cin>>q;
  while(q--){
    cin>>a>>b;
    cout<<cnt[b]-cnt[a-1]<<"\n";
  }
}