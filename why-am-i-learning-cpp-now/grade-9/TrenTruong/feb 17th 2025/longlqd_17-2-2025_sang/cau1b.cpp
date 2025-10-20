#include"iostream"
using namespace std;
#define ll long long
ll n,c=0;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n;
  while(!(n&1)){c++;n>>=1;}
  for(ll i=3;i*i<=n;i+=2){
    while(n%i==0){c++;n/=i;}
  }
  cout<<c+(n>1);
}