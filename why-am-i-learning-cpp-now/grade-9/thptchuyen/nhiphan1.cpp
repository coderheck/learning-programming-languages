#include"iostream"
#include"string"
#include"vector"
#include"algorithm"
using namespace std;
vector<string>res;int n;
void backtr(string s){
  int curSize=s.size();
  if(curSize==n){res.push_back(s);return;}
  if(s[curSize-1]=='0'){
    backtr(s+'0');
  }else{
    backtr(s+'0');backtr(s+'1');
  }
}
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n;
  backtr("0");backtr("1");
  sort(res.begin(),res.end());
  for(int i=0;i<res.size();i++){cout<<res[i]<<"\n";}
}