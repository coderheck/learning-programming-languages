#include"iostream"
#include"string"
using namespace std;
string x;int n;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  // -- LICK MY A --
  cin>>x;
  n=x.size();
  if(n&1){
    for(int i=n-1;i>=0;i-=2){cout<<x[i];}
    for(int i=1;i<n;i+=2){cout<<x[i];}
  }else{
    for(int i=n-1;i>=1;i-=2){cout<<x[i];}
    for(int i=0;i<n;i+=2){cout<<x[i];}
  }
}