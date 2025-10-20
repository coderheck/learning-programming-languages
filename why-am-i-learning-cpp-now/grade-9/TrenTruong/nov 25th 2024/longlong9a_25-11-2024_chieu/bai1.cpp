#include"iostream"
#include"cmath"
using namespace std;
#define ll long long
#define maxN 10000000
int t;ll a[maxN+5];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin>>t;
  for(int i=0;i<t;i++){cin>>a[i];}
  for(int i=0;i<t;i++){
    ll x=a[i];
    ll j=sqrt(x);
    if(j*j==x){cout<<"LE\n";}else{cout<<"CHAN\n";}
  }
}