#include"iostream"
using namespace std;
#define ll long long
ll n;
int main(){
  if(fopen("calc.inp","r")){
    freopen("calc.inp","r",stdin);
    freopen("calc.out","w",stdout);
  }
  cin>>n;
  !(n%2)?cout<<n/2:cout<<n/2-n;
}