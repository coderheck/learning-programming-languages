#include"iostream"
#include"string"
#include"iomanip"
using namespace std;
int n;string s,res;float resN=-1,cmp=0;int c=0,t=0;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n;
  while(n--){
    cin>>s;
    for(int i=0;i<s.size();i++){
      if(s[i]>='0'&&s[i]<='9'){t+=s[i]-'0';c++;}
    }
    if(c==0){continue;}
    cmp=1.0*t/c;
    if(cmp>resN){resN=cmp;res=s;}
    c=t=cmp=0;
  }
  if(resN==-1){cout<<0;}else{cout<<res;}
}