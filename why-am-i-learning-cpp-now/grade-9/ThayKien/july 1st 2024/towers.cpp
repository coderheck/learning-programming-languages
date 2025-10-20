#include"iostream"
#define ll long long
using namespace std;
int main(){
  ll t1=0,t2=0;int n;cin>>n;
  for(int i=1;i<=n;i++){t1+=i;t2+=t1;}
  cout<<t2;
}