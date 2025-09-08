#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
#define ll long long 
struct cmpLo{
	bool operator()(string a,string b)const{
		if(a.size()!=b.size()){return a.size()<b.size();}
		return a<b;
	}
};
struct cmpHi{
	bool operator()(string a,string b)const{
		if(a.size()!=b.size()){return a.size()>b.size();}
		return a>b;
	}
};
bool operator>(const string& _a,const string& _b){
	if(_a.size()!=_b.size()){return _a.size()>_b.size();}
	for(ll i=0;i<_a.size();i++){
		if(_a[i]!=_b[i]){return _a[i]>_b[i];}
	}
	return false;
}
bool operator<(const string& _a,const string& _b){
	if(_a.size()!=_b.size()){return _a.size()<_b.size();}
	for(ll i=0;i<_a.size();i++){
		if(_a[i]!=_b[i]){return _a[i]<_b[i];}
	}
	return false;
}
priority_queue<string,vector<string>,cmpLo>lo,markLo;
priority_queue<string,vector<string>,cmpHi>hi,markHi;
ll q,slo=0,shi=0;string s,m;char t;
void bal(){
	if(slo>shi+1){
		hi.push(lo.top());lo.pop();
		shi++;slo--;
	}else if(slo<shi){
		lo.push(hi.top());hi.pop();
		slo++;shi--;
	}
}
void upd(){
	if(lo.empty()){
		lo.push(s);slo++;
	}else{
		m=lo.top();
		if(s>m){
			hi.push(s);shi++;
		}else{
			lo.push(s);slo++;
		}
	}
	bal();
}
void unmark(){
	while(!markHi.empty()&&markHi.top()==hi.top()){hi.pop();markHi.pop();}
	while(!markLo.empty()&&markLo.top()==lo.top()){lo.pop();markLo.pop();}
}
void del(){
	if(s==lo.top()){
		lo.pop();slo--;
	}else if(s<lo.top()){
		markLo.push(s);slo--;
	}else if(s==hi.top()){
		hi.pop();shi--;
	}else if(s>hi.top()){
		markHi.push(s);shi--;
	}
	unmark();bal();
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(0);
	cin>>q;
	for(ll i=0;i<q;i++){
		cin>>t>>s;
		if(t=='+'){upd();}else{del();}
		unmark();
		cout<<lo.top()<<"\n";
	}
}
