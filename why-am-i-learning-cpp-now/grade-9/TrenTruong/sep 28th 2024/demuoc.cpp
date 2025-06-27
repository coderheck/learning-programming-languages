#include"iostream"
#include"cmath"
using namespace std;
#define ll long long
ll a,uocChan=0,uocLe=0;
bool checkEvenDivCount(ll n){
  return((int)sqrt(n)*(int)sqrt(n)==n);
}
int main(){
  if(fopen("demuoc.inp","r")){
    freopen("demuoc.inp","r",stdin);
    freopen("demuoc.out","w",stdout);
  }
  int n;scanf("%lld",&n);
  while(n--){
    scanf("%lld",&a);
    checkEvenDivCount(a)%2?uocLe++:uocChan++;
  }
  printf("%lld\n%lld",uocChan,uocLe);
}