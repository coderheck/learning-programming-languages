#include"iostream"
#include"string"
#include"algorithm"
#include"stdio.h"
#define ll long unsigned int
using namespace std;
int main(){
	string s;getline(cin,s);
	while(s[0]==' '){s.erase(0,1);}
  while(s[s.length()-1]==' '){s.erase(s.length()-1,1);}
  for(ll i=0;i<s.length();i++){if(s[i]==s[i+1]&&s[i]==' '){s.erase(i,1);i--;}}
	ll wordcount=0;
	for(ll i=0;i<s.size();i++){
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
			wordcount++;ll j=i;
			while(s[j]!=' '){j++;}
			i=j;
		}
	}
	cout<<wordcount;
}
