#include"iostream"
#include"string"
#include"sstream"
using namespace std;
string inttostring(int n){
	stringstream ss;string tmp;
	ss<<n;ss>>tmp;
	return tmp;
}
int main(){
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		string s;cin>>s;
		if(s.length()<=10){cout<<s<<"\n";}else{
			int ThisIsWhyIHateYou=s.length()-2;
			s.replace(s.begin()+1,s.end()-1,inttostring(ThisIsWhyIHateYou));
			cout<<s<<"\n";
		}
	}
}