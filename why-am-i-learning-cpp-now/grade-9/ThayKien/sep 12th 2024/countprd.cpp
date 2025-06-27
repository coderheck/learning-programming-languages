#include"iostream"
using namespace std;
#define ll long long
ll n,sech=0;
int main(){
  cin>>n;
  for(int i=2;i*i<=n;i++){
    if(n%i==0){sech++;}
    while(n%i==0){n/=i;}
  }
  if(n>1){cout<<sech+1;}else{cout<<sech;}
}