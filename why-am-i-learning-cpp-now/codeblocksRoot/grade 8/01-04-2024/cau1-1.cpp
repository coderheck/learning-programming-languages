#include"iostream"
#define ll long long
using namespace std;
int main(){
  if(fopen("cau1-1.inp","r")){
    freopen("cau1-1.inp","r",stdin);
    freopen("cau1-1.out","w",stdout);
  }
  ll n,k,p;cin>>n>>k>>p;
  ll i=1;
  while((i*k+i)<n){
    i++;
  }
  cout<<p*i*k;
}
