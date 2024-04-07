#include"iostream"
#include"string"
#define ll long long
int ctd(char c){
  return c-'0';
}
int main(){
  using namespace std;
  string n;cin>>n;bool f=false;
  for(unsigned ll i=0;i<n.size();i++){
    if(ctd(n[i])!=8 && ctd(n[i])!=6){cout<<"NO";f=true;break;}
  }
  if(!f){cout<<"YES";}
}