#include"iostream"
using namespace std;
#define ll long long
void t1(ll x){
  ll res=0;
  while(x>1){
    res+=x/2;
    (x%2==0)?x/=2:x=(x/2)+1;
  }
  cout<<res<<" ";
}
void t2(ll x){
  ll res=0;
  while(x>1){
    res+=x/2;x/=2;
  }
  cout<<res;
}
ll x;
int main(){
  cin>>x;
  t1(x);t2(x);
}
