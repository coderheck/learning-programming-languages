// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define tname "slime"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=500005;
ll n,k,X,A[maxN],B[maxN],C[maxN],T[maxN];
struct pp{
	ll r1=0,r2=0;
	bool operator<(const pp &rhs)const{
		return r1<rhs.r1;
	}
}ss2[maxN];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k>>X;
	for(ll i=1;i<=n;i++){cin>>A[i]>>B[i]>>C[i]>>T[i];}
	if(n<=1000&&k<=1000){
		// sub 1: duyệt từng ngày với mỗi slime
		// - khi đó ta chỉ cần lưu chỉ số ngày đầu tiên và chỉ số ngày
		// cuối cùng ok[] = 1
		// - để tính số ngày ta có thể chụp ảnh, dùng mảng delta với +x
		// => thêm x slime thỏa mãn, -x => bớt x slime thỏa mãn
		// - duyệt hết mảng delta (vì có thể có nhiều trường hợp >= X
		// ở phía sau)
		vector<ll>delta(1000005,0);
		ll lst=-1; // ngày cuối cùng mà bất kì slime nào thỏa mãn
		ll res=0;
		for(ll i=1,ss,tt,r1,r2;i<=n;i++){ // duyệt các slime
			ss=r1=r2=0,tt=T[i];
			while(ss+A[i]<=C[i]){
				// giai đoạn tăng trưởng
				ss+=A[i];
				tt++;
				if(ss>=X&&!r1){r1=tt;}
			}
			if(ss>=X&&!r1){r1=tt;}
			if(!r1){continue;} // không bao giờ đạt đỉnh 
			while(ss>=X){
				// giai đoạn giảm dần, chỉ tính khi ss >= X
				r2=tt++;
				ss-=B[i];
			}
			if(r2>lst){lst=r2;}
			delta[r1]++,delta[r2+1]--;
		}
		for(ll i=1,cur=0;i<=lst+1;i++){
			cur+=delta[i];
			if(cur>=k){res++;}
			// oout(delta[i])
		}
		lout(res);
	}else if(k==1){ // cắn thêm tí test nào đó có k = 1
		// sub 2: ít nhất 1 slime thỏa mãn
		// - vì giới hạn A,B,C,T <= 10^9 nên không thể mô phỏng được,
		// vì thế ta dùng công thức để tính r1, r2
		// - sau đó, không dùng mảng hiệu mà sort mảng cặp r1, r2 theo 
		// r1 tăng dần
		// - gộp các đoạn [r1; r2] với nhau, độ dài các đoạn còn lại là 
		// số ngày chụp được
		ll res=0,cc=0;
		for(ll i=1;i<=n;i++){ // duyệt từng slime
			if(X>C[i]){continue;} // không bao giờ đạt X
			cc++;

			ll amtX=(X+A[i]-1)/A[i];
			ss2[cc].r1=T[i]+amtX;

			ll amtC=(C[i]+A[i]-1)/A[i],
				peakDay=T[i]+amtC,
				peakSS=amtC*A[i],
				amtR2=(peakSS-X)/B[i]; // số ngày còn >= X
			ss2[cc].r2=peakDay+amtR2;
		}
		if(!cc){lout("0");return 0;} // không có slime nào 
		sort(ss2+1,ss2+cc+1);
		ll curL=ss2[1].r1,curR=ss2[1].r2;
		for(ll i=2;i<=n;i++){
			if(ss2[i].r1<=curR+1){
				curR=max(curR,ss2[i].r2);
			}else{
				res+=curR-curL+1;
				curL=ss2[i].r1,curR=ss2[i].r2;
			}
		}
		res+=curR-curL+1;
		lout(res);
	}
}
