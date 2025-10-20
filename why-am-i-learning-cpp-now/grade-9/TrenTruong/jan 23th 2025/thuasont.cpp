#include"iostream"
#include"string"
using namespace std;
#define ll long long
ll n,t=0,c=0;string ans="\n";
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  if(n%2==0){
    t++;
    while(n%2==0){n/=2;c++;}
    ans+=to_string(2)+" "+to_string(c)+"\n";
  }
  for(ll i=3;i*i<=n;i+=2){
    if(n%i==0){
      c=0;t++;
      while(n%i==0){n/=i;c++;}
      ans+=to_string(i)+" "+to_string(c)+"\n";
    }
  }
  if(n>1){t++;ans+=to_string(n)+" "+to_string(1);}
  cout<<t<<ans;
}