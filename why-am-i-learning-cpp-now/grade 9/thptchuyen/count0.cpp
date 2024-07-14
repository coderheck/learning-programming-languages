#include"iostream"
using namespace std;
#define ll long long
int main(){
  ll n,c=0,i=5;cin>>n;
  while(i<=n){
    c+=n/i;
    i*=5;
  }
  cout<<c;
}