#include"iostream"
#include"string"
#include"vector"
#include"algorithm"
using namespace std;
struct code{string display,actual;};
string s,tmp="",tmp2="";vector<code>res;
bool cmpfn(const code &a,const code &b){
  if(a.actual.size()==b.actual.size()){
    return(a.actual<b.actual);
  }else{
    string tmpA=a.actual,tmpB=b.actual;
    while(tmpA.size()<tmpB.size()){tmpA='0'+tmpA;}
    while(tmpB.size()<tmpA.size()){tmpB='0'+tmpB;}
    return(tmpA<tmpB);
  }
}
int main(){
  if(fopen("TACHMASO.INP","r")){
    freopen("tachmaso.inp","r",stdin);
    freopen("tachmaso.out","w",stdout);
  }
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){
      tmp.push_back(s[i]);
    }else{
      tmp2=tmp;
      while(tmp2[0]=='0'){tmp2.erase(0,1);}
      if(!tmp.empty()){res.push_back({tmp,tmp2});}
      tmp="";
    }
  }
  tmp2=tmp;
  while(tmp2[0]=='0'){tmp2.erase(0,1);}
  if(!tmp.empty()){res.push_back({tmp,tmp2});}
  sort(res.begin(),res.end(),cmpfn);
  for(int i=0;i<res.size();i++){cout<<res[i].display<<" ";}
}