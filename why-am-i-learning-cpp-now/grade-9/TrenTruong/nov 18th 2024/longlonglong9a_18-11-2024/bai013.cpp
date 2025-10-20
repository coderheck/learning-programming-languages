#include"iostream"
using namespace std;
int res=0,a,b;
bool pl(int n){
  int cmpn=0,n1=n;
  while(n1!=0){cmpn*=10;cmpn+=n1%10;n1/=10;}
  return(cmpn==n);
}
int main(){
  cin>>a>>b;
  for(int i=a;i<=b;i++){
    res+=pl(i);
  }
  cout<<res;
}