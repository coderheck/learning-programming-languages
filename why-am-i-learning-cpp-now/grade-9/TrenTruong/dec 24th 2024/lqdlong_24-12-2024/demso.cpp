#include"iostream"
using namespace std;
#define ll long long
ll a,b,c;
int main(){
  cin>>a>>b>>c;
  ll ssh=b-a+1;
  ll d=b/c-(a-1)/c;
  cout<<ssh-d;
}