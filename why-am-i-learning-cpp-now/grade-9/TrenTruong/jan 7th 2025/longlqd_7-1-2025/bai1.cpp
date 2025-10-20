#include"iostream"
using namespace std;
#define ll long long
#define exit0 return 0;
ll k,a,b,d;
int main(){
  cin>>a>>b>>k;
  if(k&1){cout<<"NO";exit0;}
  d=b/k-(a-1)/k;
  if(d&1){cout<<"NO";}else{cout<<"YES";}
}