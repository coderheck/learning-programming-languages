#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool cmpfn(const string &a,const string &b){
  if(a.size()!=b.size()){
    return(a.size()<b.size());
  }else{
    return(a<b);
  }
}
int n;string s;vector<string>res;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  while(n--){
    cin>>s;
    for(int i=0;i<s.size();i++){if(s[i]<'0'||s[i]>'9'){continue;}}
    res.push_back(s);
  }
  sort(res.begin(),res.end(),cmpfn);
  for(ll i=0;i<res.size();i++){cout<<res[i];}
}
