#include"iostream"
using namespace std;
int tcs(int n){
  int ret=0;
  while(n!=0){ret+=n%10;n/=10;}
  return ret;
}
bool proc(int n){
  int thistc=tcs(n);
  int tc=0;
  while(n%2==0){tc+=2;n/=2;}
  for(int i=3;i*i<=n;i+=2){
    while(n%i==0){
      tc+=tcs(i);n/=i;
    }
  }
  if(n>2){tc+=tcs(n);}
  return(thistc==tc);
}
int a,b,res=0;
int main(){
  cin>>a>>b;
  for(int i=a;i<=b;i++){
    res+=proc(i);
  }
  cout<<res;
}