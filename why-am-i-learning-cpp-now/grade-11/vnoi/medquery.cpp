#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;
#define tname "medquery"
#define ll long long 
priority_queue<ll,vector<ll>,less<ll>>lo,markLo;
priority_queue<ll,vector<ll>,greater<ll>>hi,markHi;
ll q,sl=0,sh=0,s,m;
char t;
void bal(){
	if(sl>sh+1){
		hi.push(lo.top());lo.pop();
		sh++;sl--;
	}else if(sl<sh){
		lo.push(hi.top());hi.pop();
		sl++;sh--;
	}
}
void upd(){
	if(lo.empty()){
		lo.push(s);sl++;
	}else{
		m=lo.top();
		if(s>m){
			hi.push(s);sh++;
		}else{
			lo.push(s);sl++;
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
		lo.pop();sl--;
	}else if(s<lo.top()){
		markLo.push(s);sl--;
	}else if(s==hi.top()){
		hi.pop();sh--;
	}else if(s>hi.top()){
		markHi.push(s);sh--;
	}
	unmark();bal();
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>q;
	for(ll i=0;i<q;i++){
		cin>>t>>s;
		if(t=='+'){upd();}else{del();}
		unmark();
		cout<<lo.top()<<"\n";
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
