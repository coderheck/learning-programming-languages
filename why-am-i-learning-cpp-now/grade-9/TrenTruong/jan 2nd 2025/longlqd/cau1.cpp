#include"iostream"
#include"string"
using namespace std;
string s,resS="";long long res=0;
int main(){
  while(getline(cin,s)){
    long long curS=s.size();
    if(curS>res){res=curS;resS=s;}
  }
  cout<<resS<<"\n"<<res;
}