#include"iostream"
#define ll long long
using namespace std;
int main(){
  ll a,b,c;cin>>a>>b>>c;
  if((a/b==c)||(b/c==a)||(c/a==b)){cout<<"/";}else{cout<<"NOSOL";}
}
