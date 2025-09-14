#include <iostream>
using namespace std;
#define ll long long 
ll a, b, c, res = 0;
int main(){
	cin >> a >> b >> c;
	if(a == 0 or b == 0){
		cout << 0;
		return 0;
	}
	while(b > 0){
		if(b % 2 != 0){
			res = (res + a) % c;
		}
		a = (a + a) % c; b /= 2;
	}
	cout << res;
}
