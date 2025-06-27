#include"iostream"
#include"map"
using namespace std;
map<char,int>cn;
int main(){
	cn['0']=cn['1']=cn['2']=cn['3']=cn['4']=cn['5']=cn['6']=cn['7']=cn['8']=cn['9']=0;
	string s;getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]>='0' && s[i]<='9'){cn[s[i]]++;}
	}
	for(auto i:cn){
		cout<<i.second<<" ";
	}
}
