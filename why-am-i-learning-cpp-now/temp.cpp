#include"iostream"
#include"algorithm"
using namespace std;
#define ll long long
ll x,y,ans=0;
int main(){
  if(fopen("temp.inp","r")){
    freopen("temp.inp","r",stdin);
    freopen("temp.out","w",stdout);
  }
  cin>>x>>y;
  for(ll i=x;i<=y;i++){
     if(i%3==0){ans+=i;}
  }
  cout<<ans<<"\n";
}