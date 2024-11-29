#include"iostream"
#include"string"
using namespace std;
int n,cursum=0,curcount=0;
long double curmax=0;
int max(int a,int b){return(a>b)?a:b;} 
string s,res;
int main(){
  cin>>n;
  while(n--){
    cin>>s;
    for(int i=0;i<s.size();i++){
      if(s[i]>='0'&&s[i]<='9'){cursum+=(s[i]-'0');curcount++;}
    }
    if(curcount==0){continue;} // in case there are no digits found -> div by zero error
    if(cursum*1.0/curcount>curmax){curmax=cursum*1.0/curcount;res=s;}
    cursum=curcount=0;
  }
  cout<<res;
}