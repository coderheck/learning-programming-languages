#include"iostream"
using namespace std;
#define ll long long
ll n,a=0,b=0,mindiff=2000000000;
int main(){
  cin>>n;
  for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      ll at=i,bt=n/i;
      if(mindiff>bt-at){mindiff=bt-at;a=at;b=bt;}
    }
  }
  cout<<a<<" "<<b;
}