#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
#define tname "icpc25_mt_j"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=105;
struct node{ll x,y;};
ll r,c,sx,sy,tx,ty;
ll  dx[4]={-1,0,1,0},
    dy[4]={0,1,0,-1};
char g[maxn][maxn];
bool good(const ll &x,const ll &y){
    return x>=1 and x<=r and y>=1 and y<=c and 
}
void bfs(){
    queue<node>q;
    bool vis[maxn][maxn];
    q.push({sx,sy});
    while(q.size()){
        ll x=q.front().x,y=q.front().y;q.pop();
        for(ll i=0;i<4;i++){
            ll nx=x+dx[i],ny=y+dy[i];
            
        }
    }
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>r>>c;
    for(ll i=1;i<=r;i++){
        for(ll j=1;j<=c;j++){
            cin>>g[i][j];
            if(g[i][j]=='S'){sx=i,sy=j;}
            if(g[i][j]=='D'){tx=i,ty=j;}
        }
    }

}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
