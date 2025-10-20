#include"iostream"
#include"string"
#include"algorithm"
using namespace std;
string s;
struct gay{
  int digit;int c;
}cnt[10];
bool cmpfn(const gay &a,const gay &b){
  if(a.c==b.c){return a.digit<b.digit;}
  return a.c<b.c;
}
int main(){
  if(fopen("xuathien.inp","r")){
    freopen("xuathien.inp","r",stdin);
    freopen("xuathien.out","w",stdout);
  }
  for(int i=0;i<10;i++){cnt[i].digit=0;cnt[i].digit=i;}
  getline(cin,s);
  for(int i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){cnt[s[i]-'0'].c++;}
  }
  sort(cnt,cnt+10,cmpfn);
  cout<<cnt[9].digit;
}