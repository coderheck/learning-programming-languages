#include"iostream"
#include"string"
using namespace std;
#define ll long long
string s;ll res=0,cur=0;
ll max(ll a,ll b){return(a>b)?a:b;}
int main(){
  getline(cin,s);ll n=s.size();
  for(ll i=0;i<n;i++){
    if(s[i]>='0'&&s[i]<='9'){
      cur++;
    }else{res=max(res,cur);cur=0;}
  }
  res=max(res,cur);
  cout<<res;
}