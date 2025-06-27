#include"iostream"
using namespace std;
#define ll long long
ll x,n;
int main(){
  cin>>n>>x;
  if(x==1){cout<<0;return 0;}
  cout<<n-n/x;
}