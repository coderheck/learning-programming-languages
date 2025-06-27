#include"iostream"
using namespace std;
#define ll long long
ll n;int res=0;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  if(n%2==0){res++;while(n%2==0){n/=2;}}
  for(ll i=3;i*i<=n;i+=2){
    if(n%i==0){
      res++;
      while(n%i==0){n/=i;}
    }
  }
  if(n>1){res++;}
  cout<<res;
}