#include"iostream"
#include"string"
#include"vector"
#include"algorithm"
using namespace std;
vector<string>res;int n;long long c=0;
void backtr(string s,bool zo){
  int curSize=s.size();
  if(curSize==n){res.push_back(s);c++;return;}
  if(s[curSize-1]=='0'){
    if(!zo){backtr(s+'1',true);}
    backtr(s+'0',zo);
  }else{
    backtr(s+'0',zo);backtr(s+'1',zo);
  }
}
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n;
  backtr("0",false);backtr("1",false);
  sort(res.begin(),res.end());
  for(int i=0;i<c;i++){cout<<res[i]<<"\n";}
  cout<<c;
}