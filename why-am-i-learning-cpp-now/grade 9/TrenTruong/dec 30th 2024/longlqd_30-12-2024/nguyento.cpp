#include"iostream"
#include"cmath"
using namespace std;
#define ll long long
bool ispr(ll n){
  if(n<2){return false;}
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){return false;}
  }
  return true;
}
ll n,i;
int main(){
  cin>>n;
  i=sqrt(n);
  while(1){
    if(ispr(i)){cout<<i*i;return 0;}
    i++;
  }
}