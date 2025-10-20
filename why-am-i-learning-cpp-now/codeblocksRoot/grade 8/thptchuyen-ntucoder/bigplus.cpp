#include"iostream"
#include"string"
#define ll long long
using namespace std;
int main(){
  string a,b,res="";cin>>a>>b;
  if(a.size()!=b.size()){
    while(a.size()<b.size()){a='0'+a;}
    while(a.size()>b.size()){b='0'+b;}
  }
  int rem=0;
  for(ll i=a.size()-1;i>=0;i--){
    int d=(a[i]-'0')+(b[i]-'0')+rem;
    rem=d/10;
    res=(char)(d%10+'0')+res;
  }
  if(rem){res='1'+res;}
  cout<<res;
}
