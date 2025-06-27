#include"iostream"
using namespace std;
#define ll long long
ll n,res=0;
int main(){
  cin>>n;
  for(int a=1;a*a<=n;a++){
    for(int b=a;b*b<=n;b++){
      for(int c=b;c*c<=n;c++){
        if(a*a+b*b+c*c==n){res++;}
      }
    }
  }
  cout<<res;
}