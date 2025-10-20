#include"bits/stdc++.h"
using namespace std;
#define ll long long
bool nto(int n){
  bool nt=true;
  if(n<=1){nt=false;}
  for(int i=2;i*i<=n;i++){if(n%i==0){nt=false;}}
  return nt;
}
int reverseDigits(int arg){
    long long n=arg,rev=0;
    while(n>0){rev*=10;rev+=n%10;n/=10;}
    return rev;
}
using namespace std;
int main(){
  if(fopen("prime3.inp","r")){
    freopen("prime3.inp","r",stdin);
    freopen("prime3.out","w",stdout);
  }
  int a,b,d=0;cin>>a>>b;
  for(int i=a;i<=b;i++){
    if(nto(i)==true && nto(reverseDigits(i))==true){d++;}
  }
  cout<<d;
}
