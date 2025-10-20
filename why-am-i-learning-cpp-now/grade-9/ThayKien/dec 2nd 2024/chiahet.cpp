#include"iostream"
using namespace std;
#define ll long long
ll k,a[20],res=0,divglobal=1;int m;
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return(a/gcd(a,b))*b;}
int main(){
  cin>>k>>m;
  for(int i=0;i<m;i++){cin>>a[i];}
  for(int i=0;i<m;i++){
    divglobal=lcm(divglobal,a[i]);
  }
  cout<<divglobal<<"\n";
  for(int i=0;i<m;i++){
    cout<<a[i]<<" "<<((k/a[i])-divglobal)<<"\n";
    res+=((k/a[i])-divglobal);
  }
  cout<<res;
}