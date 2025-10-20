#include"iostream"
using namespace std;
#define ll long long
ll a,b,c;
int t;
void solve(){
  c%=2;
  if(c){
    if(a<b){cout<<"Second";}else{cout<<"First";}
  }else{
    if(a>b){cout<<"First";}else{cout<<"Second";}
  }
  cout<<"\n";
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>t;
  while(t--){
    cin>>a>>b>>c;
    solve();
  }
}