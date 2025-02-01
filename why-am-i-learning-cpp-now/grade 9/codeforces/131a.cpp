#include"iostream"
#include"string"
using namespace std;
string s;bool frC;int n,caps=0;
int main(){
  cin>>s;
  n=s.size();
  frC=(s[0]>='a'&&s[0]<='z');
  caps+=frC;
  for(int i=1;i<n;i++){
    if(s[i]>='A'&&s[i]<='Z'){caps++;}
  }
  if(caps==n-1){
    for(int i=1;i<n;i++){s[i]+=32;}
    // if()
  }
  cout<<s;
}