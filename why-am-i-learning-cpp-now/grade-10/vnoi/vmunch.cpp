#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define ll long long
const ll maxN=105;

int r,c,sx,sy,tx,ty,
    d[maxN][maxN], // khoảng cách ngắn nhất từ (sx,sy) -> (i,j)
    mX[]={0,0,1,-1}, // hướng di chuyển cho i
    mY[]={1,-1,0,0}; // hướng di chuyển cho j
char a[maxN][maxN], // loại ô tại (i,j)
	 vis[maxN][maxN]; // dùng luôn kiểu char cho mảng bool visited
struct vertex{ll x,y;};
queue<vertex>q; // xét các điểm (i,j) theo chiều rộng (BFS)
vertex startPos,t;

void bfs(ll sx,ll sy){

	for(ll i=1;i<=r;i++){
		fill_n(d[i],c+1,0); // đặt giá trị khoảng cách giữa ô xuất phát tới (i,j) = 0
		fill_n(vis[i],c+1,false); // chưa đi qua ô nào cả
	}

	startPos.x=sx,startPos.y=sy;
	q.push(startPos);vis[sx][sy]=true; // xét từ ô bò (sx,sy)

	while(not q.empty()){
		ll x=q.front().x,y=q.front().y;q.pop(); // duyệt đỉnh (x,y)

		if(a[x][y]=='B'){return;} // đến được chuồng bò thì dừng lại

		for(ll i=0;i<4;i++){ // xét đỉnh (u,v) mới theo các hướng lên - xuống - trái - phải
			ll u=x+mX[i],v=y+mY[i];

			if(u > r || u < 1){continue;} // check biên -> duyệt hướng khác
			if(v > c || v < 1){continue;} // check biên -> duyệt hướng khác
			if(a[u][v] == '*'){continue;} // check đá -> duyệt hướng khác

			if(!vis[u][v]){ // nếu chưa duyệt đỉnh (u,v) -> tính thôi!
				d[u][v]=d[x][y]+1; // quãng đường ngắn nhất tới (u,v) = quãng ngắn nhất tới (x,y) + 1
				vis[u][v]=true; // đánh dấu đã duyệt
				t.x=u,t.y=v;q.push(t); // thêm vào queue để duyệt bfs
			}
		}
	}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>r>>c;
	for(ll i=1;i<=r;i++){
		for(ll j=1;j<=c;j++){
			cin>>a[i][j];
			if(a[i][j]=='C'){sx=i,sy=j;} // đánh dấu ô bắt đầu
			if(a[i][j]=='B'){tx=i,ty=j;} // đánh dấu ô cần đến
		}
	}
	bfs(sx,sy);
	cout<<d[tx][ty]; // kết quả của bài toán là d[tx][ty]
}
