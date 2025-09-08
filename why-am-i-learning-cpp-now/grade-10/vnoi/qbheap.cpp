#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <unordered_map>
using namespace std;
#define ll long long 
#define pque priority_queue
#define umap unordered_map
const ll maxPqSize=15000;
struct cmpfn{
	bool operator()(string a,string b)const{
		return (a.size()!=b.size())?(a.size()<b.size()):(a<b);
	}
};
string s,lastS;
umap<string,ll>cnt;
pque<string,vector<string>,cmpfn>pq;
vector<string>res;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	while(cin>>s){
		if(s[0]=='+'&&pq.size()<maxPqSize){
			s.erase(0,1);pq.push(s);
		}
		if(s[0]=='-'&&!pq.empty()){
			string tm=pq.top();pq.pop();
			while(!pq.empty()&&pq.top()==tm){pq.pop();}
		}
	}
	while(!pq.empty()){
		if(!cnt[pq.top()]){
			res.push_back(pq.top());
			cnt[pq.top()]++;
		}
		pq.pop();
	}
	cout<<res.size()<<"\n";
	for(string& ss:res){cout<<ss<<"\n";}
}
