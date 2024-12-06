#include"iostream"
using namespace std;
#define ll long long
int tcs(ll n){
  int r=0;
  while(n!=0){
    r+=(n%10);
    n/=10;
  }
  return r;
}
int n;
void compute(){
  int c=0;ll cur=18,res=18;
  while(c<n){
    if(tcs(cur)==10){
      res=cur;
      c++;
    }
    cur++;
  }
  cout<<res;
}
int main(){
  cin>>n;
  compute();
}