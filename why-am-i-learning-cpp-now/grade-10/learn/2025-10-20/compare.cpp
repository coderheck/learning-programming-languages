#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define ll long long 
const ll maxN=1000000;
ll ntest=5,a;
int main(){
	srand(time(0));
	cin.tie(0)->sync_with_stdio(0);
	fstream input,log;
	while(ntest--){
		input.open("digits1.inp",fstream::out|fstream::trunc);
		log.open("digits1.log",fstream::out|fstream::app);
		srand((time(0)+ntest)*ntest);
		a=(rand()+maxN)%maxN;
		input<<a;input.close();
		cout<<a<<"\n";
		system("digits1.exe"); system("digits1_rac.exe");
		system("fc digits1.out digits1_rac.out");
	}
}
