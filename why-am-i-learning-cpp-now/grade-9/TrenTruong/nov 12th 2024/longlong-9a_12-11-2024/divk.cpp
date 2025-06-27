#include"iostream"
#include"vector"
#include"algorithm"
using namespace std;
#define ll long long
ll n,k,d=0;
vector<ll>divs;
void comp(){
  for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      d++;divs.push_back(i);
      ll j=n/i;
      if(i!=j){d++;divs.push_back(j);}
    }
  }
  if(d>=k){sort(divs.begin(),divs.end());cout<<divs[k-1];}else{cout<<-1;}
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  if(fopen("divk.inp","r")){
    freopen("divk.inp","r",stdin);
    freopen("divk.out","w",stdout);
  }
  cin>>n>>k;
  comp();
}