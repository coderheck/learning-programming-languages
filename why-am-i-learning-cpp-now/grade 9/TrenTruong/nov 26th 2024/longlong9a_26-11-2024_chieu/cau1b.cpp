#include"iostream"
using namespace std;
#define ll long long
ll n,res=0;
int main(){
  cin>>n;
  while(n%2==0){n/=2;res++;}
  for(ll i=3;i*i<=n;i+=2){
    while(n%i==0){
      res++;n/=i;
    }
  }
  if(n>1){res++;}
  cout<<res;
}