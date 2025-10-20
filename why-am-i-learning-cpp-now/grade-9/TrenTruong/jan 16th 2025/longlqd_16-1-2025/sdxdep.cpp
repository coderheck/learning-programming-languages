#include"iostream"
using namespace std;
int a,b,res=0;
bool ispl(int n){
  int r=0,n1=n;
  while(n!=0){r=r*10+n%10;n/=10;}
  return(r==n1);
}
int main(){
  cin>>a>>b;
  for(int i=a;i<=b;i++){
    if(!ispl(i)){continue;}
    int n=i,dc=0;
    if(n%2==0){dc++;while(n%2==0){n/=2;}}
    for(int j=3;j*j<=n;j+=2){
      if(n%j==0){
        dc++;
        while(n%j==0){n/=j;}
      }
    }
    if(n>1){dc++;}
    res+=(dc>2);
  }
  cout<<res;
}