#include <iostream>
#include <string>
using namespace std;
#define tname "robot45"
#define ll long long
#define ii int
#define umap unordered_map
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define max(a,b) ((a)>(b)?(a):(b))
ll n,ans=0,mx[4]={1,0,-1,0},my[4]={0,1,0,-1};
bool obj[9][9],vis[9][9];
// obj[i][j]=true => có vật cản, vis[i][j]=true => đã đi qua
void backt(ll x,ll y,const ll &cDir,ll res){
    if(x<1||x>8||y<1||y>8||obj[x][y]||vis[x][y]){return;}
    res++,vis[x][y]=true;
    ans=max(ans,res);
    ll nx=x+mx[cDir],ny=y+my[cDir];
    if(nx>=1&&nx<=8&&ny>=1&&ny<=8&&vis[nx][ny]){vis[x][y]=false;return;}
    if(nx<1||nx>8||ny<1||ny>8||obj[nx][ny]){
        if(cDir&1){
            // (1,0) hoặc (-1,0) -> (0,1),(0,-1)
            backt(x+mx[0],y+my[0],0,res);
            backt(x+mx[2],y+my[2],2,res);
        }else{
            // (0,1) hoặc (0,-1) -> (1,0),(-1,0)
            backt(x+mx[1],y+my[1],1,res);
            backt(x+mx[3],y+my[3],3,res);
        }
        vis[x][y]=false;
        return;
    }
    backt(nx,ny,cDir,res);
    vis[x][y]=false;
}
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin>>n;
    for(ll i=1;i<=n;i++){
        string pos;cin>>pos;
        obj[pos[1]-'0'][pos[0]-'A'+1]=true;
    }
    // for(ll i=1;i<=8;i++){
    //     for(ll j=1;j<=8;j++){
    //         cerr<<obj[i][j];
    //     }
    //     cerr<<"\n";
    // }
    backt(1,1,0,0);
    lout(ans);
}
