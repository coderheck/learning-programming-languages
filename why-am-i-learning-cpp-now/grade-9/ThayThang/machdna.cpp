#include"iostream"
#include"string"
using namespace std;
string s;int n,c=0;
char parity(const char &c){
  if(c=='A'){return'T';}
  if(c=='T'){return'A';}
  if(c=='G'){return'C';}
  if(c=='C'){return'G';}
}
int main(){
  // freopen("machdna.inp","r",stdin);
  // freopen("machdna.out","w",stdout);
  cin>>s;n=s.size();
  for(int i=0;i<n;i++){
    if(s[i]>='0'&&s[i]<='9'){
      c=c*10+s[i]-'0';
    }else{
      char out=parity(s[i]);
      while(c){cout<<out;c--;}
    }
  }
}