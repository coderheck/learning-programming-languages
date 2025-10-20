#include"iostream"
#include"string"
#include"sstream"
using namespace std;
#define ll long long
string s,tmp,res,longestWord("");ll wrdCnt=0;
int main(){
  if(fopen("cau4.inp","r")){
    freopen("cau4.inp","r",stdin);
    freopen("cau4.out","w",stdout);
  }
  getline(cin,s);
  stringstream ss(s);
  while(ss>>tmp){
    wrdCnt++;
    tmp[0]=toupper(tmp[0]);
    if(longestWord.length()<tmp.length()){longestWord=tmp;}
    res=res+' '+tmp;
  }
  res.erase(0,1);
  cout<<res<<"\n"<<longestWord<<"\n"<<wrdCnt;
}