#include <iostream>
using namespace std;
#define ll long long 
ll n,m,a[1000005],f[10005][10005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){cin>>a[i];}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(!i||!j){
				f[i][j]=0;
			}else{
				if(j<a[i]){
					f[i][j]=f[i-1][j];
				}else{
					f[i][j]=f[i][j-a[i]]+1;
				}
			}
		}
	}
	cout<<f[n][m];
}

