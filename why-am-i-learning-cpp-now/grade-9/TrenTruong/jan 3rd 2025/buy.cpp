#include"iostream"
using namespace std;
#define ll long long
#define maxN 10000000
ll n,a,b;
int main(){
  cin>>n>>a>>b;
  ll x=0;
  while(x*a<=n){
    if((n-x*a)%b==0){
      cout<<"YES\n"<<x<<" "<<(n-x*a)/b;
      return 0;
    }
    x++;
  }
  cout<<"NO";
}