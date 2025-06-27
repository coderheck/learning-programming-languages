#include"iostream"
#include"vector"
#include"algorithm"
using namespace std;
#define ll long long
vector<ll>divs;
ll n,k,d=0;
void demuoc(){
  for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      d++;divs.push_back(i);
      ll j=n/i;
      if(j!=i){d++;divs.push_back(j);}
    }
  }
  if(d>=k){sort(divs.begin(),divs.end());}
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  if(fopen("divk.inp","r")){
    freopen("divk.inp","r",stdin);
    freopen("divk.out","w",stdout);
  }
  cin>>n>>k;
  demuoc();
  d<k?cout<<-1:cout<<divs[k-1];
}