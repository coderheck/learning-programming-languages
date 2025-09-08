#include <stdio.h>
// #include <unordered_map>
// using namespace std;
#define ll long long 
// #define umap unordered_map
ll max(const ll/*&*/ a,const ll/*&*/ b){return(a>b)?a:b;}
ll n,maxL=1,curL=1,a,pos[100005];
// umap<ll,ll>pos;
int main(){
	scanf("%lld",&n);
	for(ll i=1;i<=n;i++){scanf("%lld",&a);pos[a]=i;}
	for(ll i=2;i<=n;i++){
		if(pos[i]>pos[i-1]){
			curL++;
			maxL=max(maxL,curL);
		}else{
			curL=1;
		}
	}
	printf("%lld",n-maxL);
}
