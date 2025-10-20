#include"iostream"
#include"math.h"
using namespace std;
#define ull long long
// n*(n+1)/2
int main(){
	ull n;cin>>n;
	cout<<(-1+(ull)sqrt(1+4*(2*n)))/2;
}
