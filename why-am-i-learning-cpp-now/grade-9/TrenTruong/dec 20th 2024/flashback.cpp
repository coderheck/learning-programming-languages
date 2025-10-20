#include<iostream>
#define mod 1000000007
using namespace std;
long long t,s[100005];
int n,k;
int main(){
  cin>>n>>k;
  s[0]=n;t=n;
  for(int i=1;i<=k;i++){
    s[i]=(s[i-1]+t)%mod;
    t=(t+s[i])%mod;
  }
  cout<<s[k];
}