#include"iostream"
using namespace std;
#define ll long long
int t;ll n;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>t;
  while(t--){
    cin>>n;
    cout<<n/3+n/5-n/15<<"\n";
  }
}