#include"iostream"
#include"stdio.h"
#include"algorithm"
using namespace std;
int main(){
  string str,res;int n=0;getline(cin,str);
  if(str.size()%2==1){
    for(int i=str.size()-1;i>=0;i-=2){
      res[n]=str[i];n++;
    }
    for(int i=1;i<str.size();i+=2){
      res[n]=str[i];n++;
    }
  }
  cout<<res;
}