#include"iostream"
using namespace std;
#define ll long long
ll x,y;
void SEXY(){
  if(x%3!=0){x+=(3-x%3);}
  if(y%3!=0){y-=y%3;}
  if(x>y){cout<<0;}else{
    ll ssh=(y-x)/3+1;
    ll t=ssh*(x+y)/2;
    cout<<t;
  }
}
int main(){
  if(fopen("sd3.inp","r")){
    freopen("sd3.inp","r",stdin);
    freopen("sd3.out","w",stdout);
  }
  cin>>x>>y;
  SEXY();
}