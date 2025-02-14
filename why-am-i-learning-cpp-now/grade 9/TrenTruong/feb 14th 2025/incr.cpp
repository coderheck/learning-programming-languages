#include"iostream"
using namespace std;
#define ll long long
int n,d;ll a,b,res;
void compute(){
  res+=(a-b+d)/d;b=a+d;
}
int main(){
  cin>>n>>d;
  while(n--){cin>>b;if(a>=b){compute();}a=b;}
  cout<<res;
}