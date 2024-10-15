#include"iostream"
#include"algorithm"
using namespace std;
#define ll long long
ll x,y,ans=0;
int main(){
  if(fopen("sd3.inp","r")){
    freopen("sd3.inp","r",stdin);
    freopen("sd3.out","w",stdout);
  }
  cin>>x>>y;
  for(ll i=x;i<=y;i++){
    if(i%3==0){ans+=i;}
  }
  cout<<ans;
}