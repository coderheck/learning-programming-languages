#include <stdio.h>
// #include <vector>
// #include <string.h>
// using namespace std;
#define ll long long 
#define min(a,b) ((a)<(b)?(a):(b))
const ll dpLim=100005;
const ll inf=10000000000007;
ll a,b,c;
int main(){
	if(fopen("robot23.inp","r")){
		freopen("robot23.inp","r",stdin);
		freopen("robot23.out","w",stdout);
	}
	scanf("%lld%lld%lld",&a,&b,&c);
	// if(b<=dpLim&&c<=dpLim){
	// 	std::vector<ll>dp(dpLim+5,inf);
	// 	ll n=b-a+1;
	// 	dp[0]=0;
	// 	for(ll i=1;i<n;i++){
	// 		ll nxt=a+i;
	// 		if(nxt%c==0){continue;}
	// 		if(i-1>=0&&dp[i-1]!=inf){dp[i]=min(dp[i],dp[i-1]+1);}
	// 		if(i-2>=0&&dp[i-2]!=inf){dp[i]=min(dp[i],dp[i-2]+1);}
	// 	}
	// 	printf("%lld",dp[n-1]);
	// }else 
	if(c%2==0){
		ll res=0;
		if((a+1)&1){a++,res++;}
		if((b-1)&1){b--,res++;}
		res+=b/2-(a-1)/2;
		// printf("%lld",(b-a+(a&1))/2);
		printf("%lld",res);
	}
	else{
		ll k,nxt,res=0;
		while(a<b){
			k=c*(a/c+1); // bội nhỏ nhất của c mà lớn hơn a 
			if(b<k){res+=(b-a+1)/2;break;}
			nxt=k-1-a;
			res+=(nxt+1)/2;
			a=k-1;
			if(a+2<=b){a+=2,res++;}else if(a+1<=b){a++,res++;}else{break;}
		}
		printf("%lld",res);
	}
}

// 2 7 3 
// 2 4 5 7 -> 3
//
// 4 10 3
// 4 5 7 8 10 -> 4
// k = 6 => k - 1 = 5 => 2*k - 2 = 10
//             +1            +3
//
// 4 16 3
// 4 5 7 8 10 11 13 14 16 -> 8
// k=6 => k-1=5 => 2*k-1=11 => 3*k-2=16
//          +1        +4         +3
//
// 5 16 3
// 5 7 8 10 11 13 14 16 -> 7
// k=6 => k-1=5 => 2*k-1=11 => 3*k-2=16
//                   +4           +3
//
// 2 16 3
// 2 4 5 7 8 10 11 13 14 16 -> 9
// k=3 => 2*k-1=2
//           +1
