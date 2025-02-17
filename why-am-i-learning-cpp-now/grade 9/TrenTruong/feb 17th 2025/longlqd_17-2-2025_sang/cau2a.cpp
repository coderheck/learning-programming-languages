#include"iostream"
#include"string"
using namespace std;
#define ll long long
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
string s;ll a,b;
int main(){
  cin>>s;
  for(int i=0;i<s.size();i++){
    if((s[i]-'0')&1){b=b*10+s[i]-'0';}else{a=a*10+s[i]-'0';}
  }
  cout<<gcd(a,b);
}