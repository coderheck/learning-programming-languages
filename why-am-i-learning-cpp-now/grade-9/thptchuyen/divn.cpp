#include"iostream"
using namespace std;
#define ll long long
ll l,r,n,c=0,j;
int main(){
  cin>>n>>l>>r;
  for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      if(i>=l&&i<=r){c++;}
      j=n/i;
      if(i!=j&&j>=l&&j<=r){c++;}
    }
  }
  cout<<c;
}