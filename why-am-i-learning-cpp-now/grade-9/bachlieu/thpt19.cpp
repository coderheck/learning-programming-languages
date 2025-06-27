#include<iostream>
#include<string>
using namespace std;
#define ll long long
string s;ll n,res=0;
int main(){
  cin>>n>>s;
  for(ll i=0;i<n;i++){
    res+=(
      !(s[i]>='0'&&s[i]<='9')
        &&
      s[i]!='a'
        &&
      s[i]!='e'
        &&
      s[i]!='i'
        &&
      s[i]!='o'
        &&
      s[i]!='u'
    );
  }
  cout<<res;
}
