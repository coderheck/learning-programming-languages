#include<iostream>
#include<string>
#include<map>
using namespace std;
#define ll long long
string s;ll res=0,tmp=0;map<char,ll>cnt;
int main(){
	if(fopen("cau2.inp","r")){
		freopen("cau2.inp","r",stdin);
		freopen("cau2.out","w",stdout);
	}
	cnt[' ']=0;
	cin>>s;
	for(ll i=0;i<(ll)s.size();i++){
		if(cnt[s[i]]){
			if(tmp>res){res=tmp;}
			cnt.clear();tmp=0;
		}
		cnt[s[i]]++;tmp++;
	}
	if(tmp>res){res=tmp;}
	cout<<res;
}

