#include"iostream"
#include"string"
#include"sstream"
using namespace std;
int chartoint(char c){
  return (int)c-'0';
}
string IntToString(int n){
  stringstream tmp; tmp<<n;
  string ret; tmp>>ret;
  return ret;
}
int main(){
  string s;getline(cin,s);

  for(int i=0;i<s.size();i++){

    if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
      char c=s[i];int solan=1,j=i+1;
      while(s[j]==c){solan++;j++;}
      string solanStr=IntToString(solan);
      s.replace(s.begin()+i,s.begin()+j-1,solanStr);
      s[i+solanStr.size()]=c;i+=solanStr.size();
    }

    if(s[i]>='0' && s[i]<='9'){
      int j=i+1;int solan=chartoint(s[i]);
      while(s[j]>='0' && s[j]<=9){solan*=10;solan+=chartoint(s[i]);j++;}
      char c=s[j];
      s.replace(s.begin()+i,s.begin()+j,solan-1,c);
      i=j;
    }

  }
  cout<<s;
}