#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long 
string s,tmp,proc,rev,res("");ll c,n,p,i,j;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  while(cin>>c){
    if(!c){cout<<res;return 0;}
    cin>>s;n=s.size();
    tmp.clear();proc.clear();rev.clear();p=i=j=0;
    for(i=0;i<n;i++){
      rev=s.substr(i,c);
      if(p){reverse(rev.begin(),rev.end());}
      proc+=rev;
      p=(p+1)%2;i+=c-1;
    }
    for(i=0;i<c;i++){
      for(j=i;j<n;j+=c){tmp+=proc[j];}
    }
    res+=tmp+"\n";
  }
  cout<<res;
}
