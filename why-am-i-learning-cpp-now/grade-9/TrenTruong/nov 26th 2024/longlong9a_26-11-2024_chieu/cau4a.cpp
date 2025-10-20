#include"iostream"
#include"vector"
#include"algorithm"
using namespace std;
#define ll long long
string s;
vector<ll>res;
void proc(){
  for(unsigned ll i=0;i<s.size();i++){
    if(s[i]>='1'&&s[i]<='9'){
      ll cur=s[i]-'0';
      while(s[i+1]>='0'&&s[i+1]<='9'){
        i++;
        cur=cur*10+(s[i]-'0');
      }
      res.push_back(cur);
      cur=0;
    }
  }
  sort(res.begin(),res.end());
  for(auto i:res){
    cout<<i<<" ";
  }
}
int main(){
  cin>>s;
  proc();
}