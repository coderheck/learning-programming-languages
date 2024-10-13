#include"iostream"
using namespace std;
#define Nmax 1000000
int a[Nmax],cnt[Nmax],n,m;
int main(){
	int maxx=INT_MIN;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		if(maxx<a[i]) maxx=a[i];
		cnt[a[i]]++;
		cout<<cnt[a[i]]<<" ";
	}
}