#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define tname "amax"
string s,res="0";ll n;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>s;n=s.size();
	for(ll i=0;i<n;i++){
		if((s[i]>='0'&&s[i]<='9')){
			string tm;tm.push_back(s[i]);
			while(i+1<n&&s[i+1]>='0'&&s[i+1]<='9'){
				tm.push_back(s[i+1]);i++;
			}
			while(tm[0]=='0'){tm.erase(0,1);}
			if((tm[tm.size()-1]-'0')%2==0){continue;}
			if(tm.size()>res.size()){
				res=tm;continue;
			}else if(res.size()>tm.size()){
				continue;
			}
			for(ll i=0;i<tm.size();i++){
				if(tm[i]>res[i]){
					res=tm;break;
				}else if(res[i]>tm[i]){
					break;
				}
			}
		}
	}
	cout<<(res!="0"?res:"NO");
}
