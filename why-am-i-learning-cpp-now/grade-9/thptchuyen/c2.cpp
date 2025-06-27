#include"iostream"
#include"map"
using namespace std;
#define ll long long
ll a;int n;
map<ll,int>cnt;
int main(){
  cin>>n;
  for(int i=1;i<=n;i++){cin>>a;cnt[a]++;}
  for(map<ll,int>::iterator i=cnt.begin();i!=cnt.end();i++){
    cout<<i->first<<" ";
  }
}