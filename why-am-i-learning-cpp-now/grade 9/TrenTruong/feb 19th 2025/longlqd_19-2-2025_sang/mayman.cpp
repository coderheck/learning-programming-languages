#include"iostream"
using namespace std;
int n,res=0,a;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n;
  while(n--){cin>>a;res+=(a%10==9);}
  cout<<res;
}