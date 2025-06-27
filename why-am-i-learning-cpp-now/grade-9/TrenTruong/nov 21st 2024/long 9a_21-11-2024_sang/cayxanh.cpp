#include"iostream"
#include"cmath"
using namespace std;
#define ll long long
int n,res=0;ll l,m,a;
int main(){
  cin>>n>>l>>m;
  while(n--){
    cin>>a;
    res+=(abs(a-l)<=m);
  }
  cout<<res;
}