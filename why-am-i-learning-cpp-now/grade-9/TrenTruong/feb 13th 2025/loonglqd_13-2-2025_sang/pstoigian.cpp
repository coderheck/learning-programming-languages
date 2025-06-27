#include"iostream"
using namespace std;
#define ll long long
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll a,b,gc;
int main(){
  cin>>a>>b;gc=gcd(a,b);a/=gc;b/=gc;
  if(b<0){
    cout<<a*-1<<"/"<<b*-1;
  }else{
    cout<<a<<"/"<<b;
  }
}