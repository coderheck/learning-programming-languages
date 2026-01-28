#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define tname "cau2"
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define vowel(x) ((x)=='U'||(x)=='E'||(x)=='O'||(x)=='A'||(x)=='I')
ll t;string s;
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>t>>s;
    if(t&1){
        ll h=0,hs=0,res=0;
        for(ll i=0;i<(ll)s.size();i++){
            if(s[i]=='H'){
                h++;
            }else if(s[i]=='S'){
                hs+=h;
            }else if(s[i]=='G'){
                res+=hs;
            }
        }
        lout(res);
    }else{
        ll h=0,hs=0,res=0;
        for(ll i=0;i<(ll)s.size();i++){
            if(s[i]=='H'){
                h++;
            }else if(s[i]=='S'){
                hs+=h;
            }else if(s[i]=='G'){
                res+=hs;
            }else if(vowel(s[i])){
                h=hs=0;
            }
        }
        lout(res);
    }
}
