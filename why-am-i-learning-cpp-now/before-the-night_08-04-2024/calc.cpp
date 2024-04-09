#include"iostream"
#define ll long long
using namespace std;
int main(){
  int n;cin>>n;ll t;
  if(n%2==0){
    t=n/2;
  }else{t=(n-1)/2-n;}
  cout<<t;
}