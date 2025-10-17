#include <iostream>
using namespace std;
int n,m,a[100002];
int f[10002];
int main (){
	cin>>n>>m;
	for(;m <= n;m+=m&-m){
		cout << m << " ";
	}
}
