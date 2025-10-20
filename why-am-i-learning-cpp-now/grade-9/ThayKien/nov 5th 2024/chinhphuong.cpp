#include"iostream"
#include"cmath"
using namespace std;
int n,tcs=0;
int main(){
  cin>>n;
  while(n!=0){
    tcs+=n%10;
    n/=10;
  }
  if((int)sqrt(tcs)*(int)sqrt(tcs)==tcs){cout<<"YES";}else{cout<<"NO";}
}