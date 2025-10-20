#include"iostream"
using namespace std;
#define ll long long
int q;ll n;
int main(){
  cin>>q;
  while(q--){
    cin>>n;
    cout<<n/3+n/7-n/21<<"\n";
  }
}