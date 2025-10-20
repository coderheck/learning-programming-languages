#include"iostream"
#include"string"
#include"vector"
#include"algorithm"
using namespace std;
string s,tmp="";vector<string>res;
bool cmpfn(const string &a,const string &b){
  if(a.size()==b.size()){return(a<b);}else{return(a.size()<b.size());}
}
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){
      tmp.push_back(s[i]);
    }else{
      while(tmp[0]=='0'){tmp.erase(0,1);}
      if(!tmp.empty()){res.push_back(tmp);}
      tmp="";
    }
  }
  while(tmp[0]=='0'){tmp.erase(0);}
  if(!tmp.empty()){res.push_back(tmp);}
  sort(res.begin(),res.end(),cmpfn);
  for(int i=0;i<res.size();i++){cout<<res[i]<<" ";}
}