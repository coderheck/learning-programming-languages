#include"iostream"
using namespace std;
#define ll long long
ll a,b;
int main(){
  cin>>a>>b;
  ll cb=a+(a%2!=0),ce=b-(b%2!=0);
  if(cb>ce){cout<<0;exit(0);}
  ll sshch=((ce-cb)/2)+1;
  cout<<(cb+ce)*sshch/2;
}