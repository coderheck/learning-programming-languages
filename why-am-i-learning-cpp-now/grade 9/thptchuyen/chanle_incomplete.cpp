#include"iostream"
#include"algorithm"
using namespace std;
#define ll long long
int main(){
  ll a,b,ta,tb;cin>>a>>b;
  if(a%2==0 && b%2==0){
    ta=(a+b)*((b-a)/2+1)/2;
    tb=(a+b)*((b-a)/2+1)/2;
  }
  if(a%2==1 && b%2==0){
    ta=(a+b+1)*((b-a+1)/2+1)/2;
    tb=(a+b-1)*((b-a-1)/2+1)/2;
  }
  if(a%2==0 && b%2==1){
    ta=(a+b-1)*((b-a+1)/2+1)/2;
    tb=(a+b+1)*((b-a-1)/2+1)/2;
  }
  if(a%2==1 && b%2==1){
    ta=(a+b)*((b-a)/2+1)/2;
    tb=(a+b)*((b-a)/2+1)/2;
  }
  cout<<max(ta,tb)-min(ta,tb);
}