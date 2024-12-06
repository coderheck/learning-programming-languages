#include"iostream"
using namespace std;
int gcd(int a,int b){return(b==0)?a:gcd(b,a%b);}
int a,b,res=0;
int revn(int n){
  int r=0;
  while(n!=0){
    r=r*10+(n%10);
    n/=10;
  }
  return r;
}
void friendly(int n){
  res+=(gcd(n,revn(n))==1);
}
int main(){
  cin>>a>>b;
  for(int i=a;i<=b;i++){
    friendly(i);
  }
  cout<<res;
}