#include"iostream"
#include"string"
#include"map"
#include"vector"
using namespace std;
int n;string res,s;vector<string>args;
void parseArgs(){
  for(string t:args){
    map<char,int>cnt;
    for(char c:t){cnt[c]++;}
    for(auto i:cnt){
      if(i.second==1){res+=i.first;break;}
    }
  }
  cout<<res;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin>>n;
  while(n--){
    cin>>s;
    args.push_back(s);
  }
  parseArgs();
}