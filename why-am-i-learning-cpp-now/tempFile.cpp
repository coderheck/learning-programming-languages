#include"iostream"
#include"string"
using namespace std;
bool xaudoixung(string s){
	int n=s.length();bool dx=true;
	for(int i=0;i<n;i++){if(s[i]!=s[n-i-1]){dx=false;}}
	return dx;
}
int main(){
	string s;int q;cin>>s>>q;
	for(int o=1;o<=q;o++){
		int i,j;cin>>i>>j;
		string tmp=s.substr(i-1,j-i+1);
		if(xaudoixung(tmp)==true){cout<<"YES\n";}else{cout<<"NO\n";}
	}
}