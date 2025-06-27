#include<iostream>
#include<string>
using namespace std;
#define ll long long
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
string s;ll n,k,cnt[260],l=0,len=0,startPos=0;
int main(){
	for(ll i=0;i<260;i++){cnt[i]=0;}
	cin>>n>>k>>s;
	for(ll r=0;r<n;r++){
		cnt[s[r]]++;
		if(cnt[s[r]]>k){
			while(cnt[s[r]]>k){cnt[s[l]]--;l++;}
		}else{
			if(r-l+1>len){len=r-l+1;startPos=l+1;}
		}
	}
	cout<<len<<" "<<startPos;
}
