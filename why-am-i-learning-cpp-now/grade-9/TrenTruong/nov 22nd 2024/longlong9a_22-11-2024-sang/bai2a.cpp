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
ll n,m;
int main(){
  cin>>n;
  m=ceil(sqrt(n));
  while(!ispr(m)){m++;}
  cout<<m*m;
}