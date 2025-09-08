#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
string s1,s2,res("");bool f;
umap<char,ll>cnt1,cnt2;
int main(){
	while(cin>>s1>>s2){
		if(s1==s2&&s2=="END"){cout<<res;return 0;}
		cnt1.clear();cnt2.clear();f=false;
		for(char &c:s1){cnt1[c]++;}
		for(char &c:s2){cnt2[c]++;}
		for(umap<char,ll>::iterator i=cnt1.begin();i!=cnt1.end();i++){
			if(i->second!=cnt2[i->first]){res+="different\n";f=!f;break;}
		}
		res+=(f)?"":"same\n";
	}
}
