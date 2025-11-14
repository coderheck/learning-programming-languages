#include <cstdlib>
#include <iostream>
#include <fstream>
#include <random>
#include <chrono>
using namespace std;
#define ll long long 
#define taskname "stn"
const string task="stn";
const ll ntest=100;
mt19937_64 rd(chrono::steady_clock::now().time_since_epoch().count());
ll rrnd(const ll &l,const ll &r){return l+rd()%(r-l+1);}
int main(){
	// cin.tie(0)->sync_with_stdio(0);
	for(ll itest=1;itest<=ntest;itest++){
		fstream outfile("stn.inp",ios::out|ios::trunc);
		ll q=rrnd(1,5);
		outfile<<q<<"\n";
		while(q--){
			ll l=rrnd(1,100000),r=rrnd(l,100000);
			outfile<<l<<" "<<r<<"\n";
		}
		outfile.close();
		system(taskname".exe");system(taskname"_rac.exe");
		if(system(("fc " + task + ".out " + task + "_rac.out").c_str())){
			cout<<"#"<<itest<<" wrong\n";
			return 0;
		}
		cout<<"#"<<itest<<" correct\n";
	}
}
