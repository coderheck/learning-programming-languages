#include<iostream>
#include <sstream>
#include<string>
#include<unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
string arg,tm;ll o=0,d=0;umap<string,ll>cnt;
void checkd(){
	for(ll i=0;i<tm.size();i++){if(tm[i]>='0'&&tm[i]<='9'){d++;return;}}
}
int main(){
	getline(cin,arg);
	stringstream ss(arg);
	while(ss>>tm){checkd();cnt[tm]++;}
	for(umap<string,ll>::iterator i=cnt.begin();i!=cnt.end();i++){o+=(i->second==1);}
	cout<<o<<"\n"<<d;
}
