#include"iostream"
using namespace std;
#define ll long long
ll n,k,p;
int main(){
  cin>>n>>k>>p;
  n=(n/(k+1))*k+(n%(k+1)==0?0:n%(k+1));
  cout<<n*p;
}