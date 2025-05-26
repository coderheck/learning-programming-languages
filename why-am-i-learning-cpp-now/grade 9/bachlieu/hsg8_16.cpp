#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long
bool cmpfn(const string &a,const string &b){
  if(a.size()!=b.size()){
    return a.size()<b.size();
  }else{
    return a<b;
  }
}
vector<string>res;ll k;
void binge(string s){
  if(res.size()>=k){return;}
  if(s.size()>0&&s.size()%2==0){
    res.push_back(s);
    if(res.size()==k){return;}
  }
  if(s.size()>18){return;}
  for(char c='1';c<='9';c++){
    binge(c+s+c);
    if(res.size()>=k){return;}
  }
}
int main(){
  binge("");
  sort(res.begin(),res.end(),cmpfn);
  cin>>k;
  cout<<res[k-1];
}

