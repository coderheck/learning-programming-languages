#include"iostream"
#include"map"
using namespace std;
#define ll long long
ll res=0,curEleCount=0;
string s;char curEle=' ';
void parseChemical(){
  for(unsigned ll i=0;i<s.size();i++){
    curEle=s[i];
    while(s[i+1]>='0'&&s[i+1]<='9'){
      curEleCount=curEleCount*10+(s[i+1]-'0');
      i++;
    }
    if(curEleCount==0){curEleCount=1;}
    if(curEle=='H'){
      res+=curEleCount;
    }else if(curEle=='N'){
      res+=(14*curEleCount);
    }else if(curEle=='O'){
      res+=(16*curEleCount);
    }else if(curEle=='C'){
      res+=(12*curEleCount);
    }
    curEleCount=0;
  }
  cout<<res;
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin>>s;
  parseChemical();
}