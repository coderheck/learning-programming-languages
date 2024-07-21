#include"iostream"
#include"string"
#include"algorithm"
using namespace std;
#define ll long long
ll factorial(ll n){
  if(n==1){return 1;}else{return n*factorial(n-1);}
}
int main(){
  string s;cin>>s;
  sort(s.begin(),s.end());
  ll perms=factorial(s.length());
  for(ll j=0;j<s.length();j++){
    ll c=1;
    while(s[j+1]==s[j]){c++;j++;}
    perms/=factorial(c);
  }
  cout<<perms;
}
