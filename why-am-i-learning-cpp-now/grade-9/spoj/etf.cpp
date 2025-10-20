#include"iostream"
using namespace std;
#define ll long long
ll n;int t;
void eulerphi(){
  ll res=n;
  for(ll p=2;p*p<=n;p++){
    if(n%p==0){
      while(n%p==0){n/=p;}
      res-=res/p;
    }
  }
  if(n>1){res-=res/n;}
  cout<<res<<"\n";
}
int main(){
  cin>>t;
  while(t--){
    cin>>n;
    eulerphi();
  }
}