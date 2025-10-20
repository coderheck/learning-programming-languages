#include"iostream"
using namespace std;
#define ll long long
#define wtf 1000000000000000000+2
ll n;
int main(){
  cin>>n;
  // cout<<n*(n+1)/2/n;
  cout<<n/2+(n&1);
}