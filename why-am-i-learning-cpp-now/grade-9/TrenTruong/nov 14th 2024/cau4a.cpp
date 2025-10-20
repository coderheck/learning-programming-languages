#include"iostream"
#include"string"
#include"map"
using namespace std;
#define ll long long
string s;
map<char,ll>cnt;
void parse(){
  for(char i:s){
    cnt[i]++;
  }
  cout<<cnt.size()<<"\n";
  for(auto i:cnt){
    cout<<i.first<<" "<<i.second<<"\n";
  }
}
int main(){
  if(fopen("cau4a.inp","r")){
    freopen("cau4a.inp","r",stdin);
    freopen("cau4a.out","w",stdout);
  }
  cin>>s;
  parse();
}