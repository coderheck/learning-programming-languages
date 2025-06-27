#include<iomanip>
#include<iostream>
using namespace std;
#define ll long double
ll n,s=0;
int main(){
	cin>>n;
	for(ll i=1.0;i<=n;i+=1){
		s+=1.0/(i*(i+1));
	}
	cout<<fixed<<std::setprecision(4)<<s;
}
