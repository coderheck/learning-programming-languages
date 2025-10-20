#include"iostream"
#include"map"
using namespace std;
#define ll long long
int n;ll a;map<ll,int>cnt;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n;
  while(n--){cin>>a;cnt[a]++;}
  map<ll,int>::iterator i;
  for(i=cnt.begin();i!=cnt.end();i++){
    if(i->second==1){cout<<i->first;return 0;}
  }
  cout<<-1;
}