#include"iostream"
#include"string"
using namespace std;
int k;string s,digits,res="";
void parseDigits(){
  int n=digits.size(),start=0;
  for(int i=0;i<k;i++){
    char minD='9'+1;int minI=-1;
    for(int j=start;j<=n-(k-i);j++){
      if(digits[j]<minD){minD=digits[j];minI=j;}
    }
    res+=minD;start=minI+1;
  }
  cout<<res;
}
int main(){
  cin>>k;cin>>s;
  for(char c:s){
    if(c>='0'&&c<='9'){digits+=c;}
  }
  parseDigits();
}