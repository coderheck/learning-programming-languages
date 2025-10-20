#include"iostream"
#include"vector"
using namespace std;
#define ll long long
int t,k;ll n;
int main(){
  cin>>t;
  while(t--){
    vector<ll>WTF;
    cin>>n>>k;
    if(n%2==0){WTF.push_back(2);while(n%2==0){n/=2;}}
    for(ll i=3;i*i<=n;i+=2){
      if(n%i==0){WTF.push_back(i);while(n%i==0){n/=i;}}
    }
    (k>WTF.size())?cout<<-1<<"\n":cout<<WTF[k-1]<<"\n";
  }
}