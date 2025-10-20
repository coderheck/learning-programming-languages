#include"iostream"
using namespace std;
#define ll long long
ll x,y,k,t,res=1;
int main(){
  cin>>x>>y>>k;
  t+=x+k;
  while(t<y){
    t+=x;
    (res%6==0)?t+=k:t+=0;
    res++;
  }
  cout<<res;
}
