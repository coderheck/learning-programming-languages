#include"iostream"
#include"string"
using namespace std;
#define ll long long
int main(){
  string s;cin>>s;ll t=0;
  for(char c:s){
    if(c>='0'&&c<='9'){t+=c-'0';}
  }
  if(t%2){cout<<"Easy"<<t;}else{cout<<"Hard"<<t;}
}