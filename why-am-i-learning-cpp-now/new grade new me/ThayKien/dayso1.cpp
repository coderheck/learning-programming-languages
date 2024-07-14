#include"iostream"
#define ll long long
using namespace std;
int main(){
  ll n,sshang,socuoi;cin>>n;
  socuoi=2*n+1;
  sshang=(socuoi-1)/2+1;
  cout<<(socuoi+1)*sshang/2;
}
