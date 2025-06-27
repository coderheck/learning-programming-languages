#include"iostream"
using namespace std;
int n,a,res=0;
int main(){
  cin>>n>>a;
  if(a&1){cout<<a/2+1;}else{cout<<((n-a)+1)/2+1;}
}