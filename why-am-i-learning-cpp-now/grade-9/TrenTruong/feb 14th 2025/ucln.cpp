#include"iostream"
using namespace std;
#define ll long long
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
int n,l=0,r=1;ll a[1005],res=0,t;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  while(r<n){
    t=gcd(a[l],a[r]);
    if(t>res){res=t;}
    l=r;r++;
  }
  cout<<res;
}