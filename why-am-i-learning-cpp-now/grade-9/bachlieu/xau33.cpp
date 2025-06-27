#include<iostream>
#include<string>
using namespace std;
#define ll long long
ll min(const ll &a,const ll &b){return(a>b)?a:b;}
ll n,res=0,c=0;string s;
int main(){
  cin>>n>>s;
  for(ll i=0;i<n;i++){
    if(s[i]=='x'){
      c=1;
      while(s[i+1]=='x'){c++;i++;}
      if(c>=3){res+=c-2;}
    }
  }
  cout<<res;
}
