#include <iostream>
#include <cmath>
using namespace std;
#define ll long long 
ll x,rt,s1,s2;
int main(){
	cin>>x;
	rt=sqrt(x);
	s1=rt*rt;
	s2=(rt+1)*(rt+1);
	cout<<((x-s1<=s2-x)?s1:s2);
}
