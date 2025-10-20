#include"iostream"
#define ll long long
using namespace std;
int main(){
  ll n,m,d=0;cin>>n>>m;
  while(n<m){
    n+=n/10;d++;
  }
  cout<<d;
}
