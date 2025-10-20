#include"iostream"
#include"string"
#define ll long long
using namespace std;
string s,maxn="";
void proc(){
  string num="";
  for(char i:s){
    if(i>='0'&&i<='9'){
      num+=i;
    }else{
      while(num[0]=='0'){num.erase(0,1);}
      if(num.size()>maxn.size()){
        maxn=num;
      }else if(num.size()==maxn.size()){
        for(ll i=0;i<num.size();i++){
          if(num[i]<maxn[i]){
            break;
          }else if(num[i]>maxn[i]){
            maxn=num;break;
          }
        }
      }
      num="";
    }
  }
  cout<<maxn;
}
int main(){
  cin>>s;
  proc();
}