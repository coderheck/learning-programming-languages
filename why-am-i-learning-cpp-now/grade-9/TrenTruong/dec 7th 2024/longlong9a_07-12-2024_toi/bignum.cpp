#include"iostream"
using namespace std;
string s,ds;int k,pos=0,nsize;
void parsedigits(){
  for(char d:s){
    if(d>='0'&&d<='9'){ds.push_back(d);}
  }
  nsize=ds.size();
}
void buildAns(){
  for(int i=k;i>0;i--){
    char maxDigit=ds[pos];
    for(int j=pos;j<=nsize-i;j++){
      if(ds[j]>maxDigit){maxDigit=ds[j];pos=j;}
    }
    cout<<maxDigit;pos++;
  }
}
int main(){
  cin>>s;cin>>k;
  parsedigits();
  buildAns();
}