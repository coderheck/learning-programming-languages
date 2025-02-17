#include"iostream"
using namespace std;
#define ll long long
ll m,n,lc,l=-1,r;
int main(){
  cin>>m>>n;
  if(n%m!=0){cout<<-1;return 0;}
  lc=n/m;
  for(ll i=1;i*i<=lc;i++){
    if(lc%i==0){l=i;}
  }
  if(l!=-1){r=lc/l;cout<<l*m+r*m;}else{cout<<-1;}
}