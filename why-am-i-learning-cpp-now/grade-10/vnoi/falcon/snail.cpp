#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define ll long long 
const ll SZ=8;
enum dirs{d,r,u,l};
ll dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
ll n;string s;
vector<vector<bool>>path(SZ,vector<bool>(SZ,false)); // [row][col]
vector<vector<bool>>bloc(SZ,vector<bool>(SZ,false)); // [row][col]
ll solveA(ll y,ll x,dirs dir,ll cur){
	if(x<0||x>=SZ||y<0||y>=SZ||bloc[y][x]||path[y][x]){return cur;}
	path[y][x]=true;
	ll ny=y+dy[dir],nx=x+dx[dir];
	if(nx>=0&&nx<SZ&&ny>=0&&ny<SZ&&!bloc[ny][nx]&&!path[ny][nx]){
		return solveA(ny,nx,dir,cur+1);
	}else{
		dirs newdir=static_cast<dirs>((dir+3)%4);
		ll ty=y+dy[newdir],tx=x+dx[newdir];
		return solveA(ty,tx,newdir,cur);
	}
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(0);
	cin>>n;
	while(n--){
		cin>>s;
		bloc[s[1]-'0'-1][s[0]-'A']=true; // 0-based indexing
		for(ll i=0;i<8;i++){
			for(ll j=0;j<8;j++){cout<<bloc[i][j]<<" ";}
			cout<<"\n";
		}
		cout<<"-\n";
	}
	cout<<solveA(0,0,d,1);
}
