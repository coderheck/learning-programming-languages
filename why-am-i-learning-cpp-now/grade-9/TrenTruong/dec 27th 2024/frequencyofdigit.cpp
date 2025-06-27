#include"iostream"
#include"string"
using namespace std;
int t,n,res=0;string s,a;char k;
int main(){
  cin>>t;
  while(t--){
    s="";res=0;
    cin>>n>>k;
    while(n--){cin>>a;s+=a;}
    for(char c:s){if(c==k){res++;}}
    cout<<res<<"\n";
  }
}