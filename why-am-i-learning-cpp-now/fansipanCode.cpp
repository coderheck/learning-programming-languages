#include"iostream"
#define ll long long
using namespace std;
int main(){
  ll n;cin>>n;
  for(ll i=1;i<=n;i++){
    if(i!=n){
      for(ll o=1;o<=i;o++){
        if(o==1 || o==i){cout<<"-";}else{cout<<" ";}
      }
    }else{
      for(ll o=1;o<=i;o++){
        cout<<"-";
      }
    }
    cout<<"\n";
  }
}
