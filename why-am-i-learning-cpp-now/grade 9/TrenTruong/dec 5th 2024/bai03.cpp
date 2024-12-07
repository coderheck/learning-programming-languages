#include"iostream"
#include"string"
using namespace std;
#define ll long long
ll n;string s,ss,pos,res;
void parse(){
  while(ss.size()<n){ss.push_back(' ');}
  for(int i=0;i<n;i++){
    cout<<ss[pos[i]-'0'-1];
  }
  cout<<"\n";res="";
}
int main(){
  // freopen("bai03.out","w",stdout);
  cin>>n;cin>>pos;
  cin.ignore();
  getline(cin,s);
  ll l=0;ll ssize=s.size();
  while(l<=s.size()){
    ss=s.substr(l,n);
    parse();
    l+=n;
  }
}