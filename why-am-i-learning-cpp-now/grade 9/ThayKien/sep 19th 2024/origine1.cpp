#include"iostream"
using namespace std;
#define ll long long
#define maxN 5000005
ll ts[maxN],n,res;
void sangThuaSo(){
  ts[0]=ts[1]=1;
  for(ll i=1;i<=maxN;i++){ts[i]=1;}
  for(ll i=2;i*i<=maxN;i++){
    if(ts[i]==0){
      for(ll j=2*i;j<=maxN;j+=i){ts[j]*=i;}
    }
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  sangThuaSo();
  cin>>n;
  for(ll i=2;i<=n;i++){
    if(max1<ts[i]){max1=ts[i];res=i;}
  }
  cout<<res;
}