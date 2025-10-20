#include"iostream"
using namespace std;
#define ll long long
ll n,res=0;
int main(){
  cin>>n;
  res+=n/5;n%=5;
  if(n==1){
    if(res>=1){res-=1;n+=5;res+=n/3;}else{res=-1;}
  }else if(n==2){
    if(res>=2){res-=2;n+=10;res+=n/3;}else{res=-1;}
  }else if(n>0){res+=n/3;}
  if(n%3!=0){res=-1;}
  cout<<res;
}