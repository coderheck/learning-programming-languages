#include"iostream"
#include"map"
using namespace std;
#define ll long long
int n;ll a;
map<ll,ll>cnt;
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a;
    cnt[a]++;
  }
  for(auto i:cnt){
    if(i.second==1){cout<<i.first;exit(0);}
  }
  cout<<-1;
}