#include"iostream"
#include"string"
using namespace std;
string s1,s2;
int main(){
  getline(cin,s1);
  getline(cin,s2);
  long long res=s1.find(s2);
  if(res!=string::npos){
    cout<<res;
  }else{
    cout<<0;
  }
}