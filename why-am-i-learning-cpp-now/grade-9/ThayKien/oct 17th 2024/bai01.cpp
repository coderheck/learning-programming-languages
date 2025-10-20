#include"iostream"
#include"string"
#include"map"
#include"sstream"
using namespace std;
#define ll long long
string s,a;
map<string,ll>cnt;
ll palindromeNames=0,onceNames=0;
void isPl(){
  ll n=a.size();
  for(ll i=0;i<n/2;i++){
    if(a[i]!=a[n-i-1]){return;}
  }
  palindromeNames++;
}
void parseCountTable(){
  for(auto i:cnt){
    if(i.second==1){onceNames++;}
  }
  cout<<onceNames<<"\n";
}
void parseInp(){
  stringstream ss(s);
  while(ss>>a){
    isPl();
    cnt[a]++;
  }
  parseCountTable();
  cout<<palindromeNames;
}
int main(){
  getline(cin,s);
  parseInp();
}