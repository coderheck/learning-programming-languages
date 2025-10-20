#include"iostream"
#include"string"
using namespace std;
int n,na=0;string s;
int main(){
  cin>>n>>s;
  for(int i=0;i<n;i++){if(s[i]=='A'){na++;}}
  (na==n-na)?cout<<"=":(na>n-na)?cout<<">":cout<<"<";
}