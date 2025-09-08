#include <iostream>
#include <string>
#include <random>
#include <chrono>
#include <fstream>
#include <windows.h>
#include <cassert>
#include <cstdlib>
#include <ctime>
using namespace std;
#define ll long long 
const string NAME="medquery";
mt19937_64 rd(chrono::steady_clock::now().time_since_epoch().count());
ll rand_custom(const ll& l,const ll& r){
	assert(l<=r);
	return l+rd()%(r-l+1);
}
int main(){
	srand(time(0));
	system((NAME+".exe").c_str());
	
}
