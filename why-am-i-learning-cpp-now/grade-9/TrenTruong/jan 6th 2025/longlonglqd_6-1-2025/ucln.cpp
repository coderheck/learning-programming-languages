#include"iostream"
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll n,m;
int main(){
  cin>>m>>n;
  cout<<gcd(m,n);
}