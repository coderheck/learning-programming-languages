#include"iostream"
using namespace std;
#define maxP 1000000
#define ll long long
bool pr[maxP+5];ll prs[maxP];int prc=0;
void prSieve(){
  pr[0]=pr[1]=true;
  for(ll i=2;i*i<=maxP;i++){
    if(!pr[i]){
      prs[prc++]=i;
      for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
ll n;int res=0;
int main(){
  prSieve();
  cin>>n;
  for(int i=0;i<prc;i++){
    ll it=prs[i];
    if(it*it>n){break;}
    res+=(n%it==0);
  }
  cout<<res;
}