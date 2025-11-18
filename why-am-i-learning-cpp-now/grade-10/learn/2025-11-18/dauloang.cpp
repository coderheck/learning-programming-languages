#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <map>
using namespace std;
#define tname "dauloang"
#define pii pair<int,int>
int n,m,dx[]={-1,0,1,0},dy[]={0,1,0,-1};
bool good(const vector<vector<int>>&gr,const vector<vector<int>>&vis,const int &x,const int &y){
	return!(x<1||y<1||x>n||y>m||vis[x][y]||!gr[x][y]);
}
int bfs(const vector<vector<int>>&gr,vector<vector<int>>&vis,const int &x,const int &y){
	queue<pii>q;
	q.push({x,y}),vis[x][y]=true;
	int sz=0;
	while(q.size()){
		int u=q.front().first,v=q.front().second;q.pop();
		sz++;
		for(int i=0;i<4;i++){
			int nu=u+dx[i],nv=v+dy[i];
			if(good(gr,vis,nu,nv)){
				q.push({nu,nv});
				vis[nu][nv]=true;
			}
		}
	}
	return sz;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin>>n>>m;
	vector<vector<int>>gr(n+5,vector<int>(m+5)),vis(n+5,vector<int>(m+5,0));
	map<int,int>res;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){cin>>gr[i][j];}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(!vis[i][j]&&gr[i][j]){res[bfs(gr,vis,i,j)]++;}
		}
	}
	cout<<res.size()<<"\n";
	for(map<int,int>::iterator i=res.begin();i!=res.end();i++){cout<<i->first<<" "<<i->second<<"\n";}
}
