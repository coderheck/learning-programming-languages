#include"iostream"
#include"string"
#include"algorithm"
#include"vector"
using namespace std;
int n,c=0;vector<string>res;
void backt(string s){
  if(s.size()==n){res.push_back(s);c++;return;}
  if(s[s.size()-1]=='1'){
    backt(s+'0');
  }else{
    backt(s+'1');
    backt(s+'0');
  }
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  backt("0");backt("1");
  sort(res.begin(),res.end());
  cout<<c<<"\n";
  for(int i=0;i<c;i++){cout<<res[i]<<"\n";}
}