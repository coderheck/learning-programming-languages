#include"iostream"
using namespace std;
#define maxN 100000
int a,b,friendly[maxN+5];
int gcd(int a,int b){return(b==0)?a:gcd(b,a%b);}
int revn(int n){
  int r=0;
  while(n!=0){r=r*10+n%10;n/=10;}
  return r;
}
void preproc(){
  for(int i=10;i<=maxN;i++){
    friendly[i]=friendly[i-1]+(gcd(i,revn(i))==1);
  }
}
int main(){
  preproc();
  cin>>a>>b;
  cout<<friendly[b]-friendly[a-1];
}