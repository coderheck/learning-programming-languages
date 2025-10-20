#include"iostream"
using namespace std;
#define ll long long
void parse(){
  ll n,c=0,i=5;cin>>n;
  while(i<=n){
    c+=n/i;
    i*=5;
  }
  cout<<c<<"\n";
}
int t;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin>>t;
  while(t--){
    parse();
  }
}