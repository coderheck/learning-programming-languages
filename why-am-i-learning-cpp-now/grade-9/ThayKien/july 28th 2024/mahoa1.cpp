#include"iostream"
#include"string"
using namespace std;
int main(){
  int k;string s;cin>>k>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]-k<97){
      int diff=26-k;
      s[i]+=diff;
    }else{
      s[i]=s[i]-k;
    }
  }
  cout<<s;
}