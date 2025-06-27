#include"iostream"
using namespace std;
#define maxN 1000000
bool pr[maxN+1];
int q,cnt[maxN+1],l,r;
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
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  prSieve();
  for(int i=1;i<=maxN;i++){
    cnt[i]=cnt[i-1]+(i%2==1&&pr[(i+1)/2]&&pr[i]);
  }
  cin>>q;
  while(q--){
    cin>>l>>r;
    cout<<cnt[r]-cnt[l-1]<<"\n";
  }
}