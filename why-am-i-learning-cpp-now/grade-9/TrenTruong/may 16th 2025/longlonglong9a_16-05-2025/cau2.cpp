#include<iostream>
#include<string>
#include<sstream>
using namespace std;
#define ll long long
string s,res="",n="";ll c=0;
void parseString(){
	stringstream ss(s);string tmp;
	while(ss>>tmp){res+=tmp+"\n";c++;}
	while(c!=0){n=(char)((c%10)+'0')+n;c/=10;}
	cout<<n<<"\n"<<res;
}
int main(){
	getline(cin,s);
	parseString();
}
