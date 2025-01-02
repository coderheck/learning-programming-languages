#include"iostream"
#include"string"
#include"sstream"
using namespace std;
string s,proc="";
int k,sizearr[260],maxsize=0;
bool num(char &c){
  return(c>='0'&&c<='9');
}
bool lwr(char &c){
  return(c>='a'&&c<='z');
}
void parseArgs(){
  stringstream ss(s);string tmp;
  while(ss>>tmp){
    int ssize=tmp.size();
    if(ssize>maxsize){
      maxsize=ssize;
      proc=tmp;
    }
    sizearr[ssize]++;
  }
  cout<<sizearr[maxsize]<<"\n";
  for(char &c:proc){
    if(!num(c)){
      if(!lwr(c)){
        if(c-k>='A'){
          c-=k;
        }else{
          c='Z'-(k-(c-'A')-1);
        }
      }else{
        if(c-k>='a'){
          c-=k;
        }else{
          c='z'-(k-(c-'a')-1);
        }
      }
    }
  }
  cout<<proc;
}
int main(){
  getline(cin,s);
  cin>>k;k%=26;
  parseArgs();
}