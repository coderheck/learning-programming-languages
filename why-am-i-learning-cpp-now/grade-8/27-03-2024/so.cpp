#include"iostream"
using namespace std;
int main(){
  int n,scs=0;cin>>n;
  while(n!=0){n/=10;scs++;}
  cout<<scs;
}