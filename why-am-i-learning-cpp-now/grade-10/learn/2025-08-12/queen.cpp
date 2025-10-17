#include <stdio.h>
// #include <vector>
// using namespace std;
#define ll long long 
ll n,x[20],col[20],d1[40],d2[40];
// void printSol(){}
void solve(ll i){
	for(ll j=1;j<=n;j++){
		if(!col[j]&&!d1[i-j+n]&&!d2[i+j-1]){
			x[i]=j; 
			col[j]=d1[i-j+n]=d2[i+j-1]=true; // mark pos
			if(i==n){
				for(ll y=1;y<=n;y++){printf("%lld ",x[y]);} // print sol
				printf("\n");
			}else{
				solve(i+1);
			}
			col[j]=d1[i-j+n]=d2[i+j-1]=false; // reset pos
		}
	}
}
int main(){
	scanf("%lld",&n);
	solve(1);
}
