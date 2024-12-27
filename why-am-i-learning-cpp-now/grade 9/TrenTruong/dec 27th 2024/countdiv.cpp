#include"iostream"
using namespace std;
typedef long long ll;
ll t,a,b,l,r;
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return(a/gcd(a,b))*b;}
int main(){
  cin>>t;
  while(t--){
    cin>>l>>r>>a>>b;
    int ab=lcm(a,b);
    cout<<(r/a-(l-1)/a)+(r/b-(l-1)/b)-(r/ab-(l-1)/ab)<<"\n";
  }
}