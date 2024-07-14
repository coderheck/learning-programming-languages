#include"iostream"
#include"string"
#define ull unsigned long long
using namespace std;
ull dai[1000],maxLen=0,maxIndex=0;string tu[1000];
int main(){
  string s;getline(cin,s);ull iter=0;
  for(ull i=0;i<s.size();i++){
    if(s[i]!=' '){
      ull charcount=1,j=i+1;string tmp="";tmp+=s[i];
      while( ( (int)s[j]>=65 && (int)s[j]<=90 ) || ( (int)s[j]>=97 && (int)s[j]<=122 ) ){
        tmp+=(char)s[j];charcount++;j++;
      }
      i=j;
      dai[iter]=charcount;tu[iter]=tmp;iter++;
    }
  }
  for(ull i=0;i<=iter;i++){
    if(dai[i]>maxLen){maxLen=dai[i];maxIndex=i;}
  }
  cout<<tu[maxIndex];
}
