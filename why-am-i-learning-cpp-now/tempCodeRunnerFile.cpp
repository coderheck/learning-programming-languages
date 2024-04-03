#include"bits/stdc++.h"
#define ll long long
using namespace std;
int main(){
	int n,x;bool found=false;;cin>>n>>x;ll a[n];
	for(int i=0;i<n;i++){cin>>a[i];}
	for(int i=0;i<n;i++){if(i==x){found=true;}}
	if(found==true){cout<<"YES";}else{cout<<"NO";}
}
