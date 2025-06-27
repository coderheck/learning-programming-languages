#include"iostream"
#include"string"
using namespace std;
#define ll long long
string s;
ll tcs=0;
void parseStr(){
  unsigned ll n=s.size();
  for(unsigned ll i=0;i<n;i++){
    tcs+=s[i]-'0';
  }
  cout<<!(tcs%n);
}
int main(){
  if(fopen("sodep.inp","r")){
    freopen("sodep.inp","r",stdin);
    freopen("sodep.out","w",stdout);
  }
  cin>>s;
  parseStr();
}