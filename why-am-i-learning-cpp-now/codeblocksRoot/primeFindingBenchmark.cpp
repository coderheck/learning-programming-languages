#include"iostream"
#include"vector"
using namespace std;
bool isprime(int n){
  bool p=true;
  if(n<=1){p=false;}
  for(int i=2;i<=n/2;i++){if(n%i==0){p=false;}}
  return p;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  for(int i=0;i<1000000;i++){
    if(isprime(i)==true){cout<<i<<" ";}
  }
}
