#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define tname "cau2"
#define lout(x) cout<<(x)<<"\n";
#define vowel(x) ((x)=='U'||(x)=='E'||(x)=='O'||(x)=='A'||(x)=='I')
ll t;string s;
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname"_rac.out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>t>>s;
    if(t&1){
        ll h=0,hs=0,res=0;
        for(ll i=0;i<(ll)s.size();i++){
            if(s[i]=='H'){
                for(ll j=i+1;j<(ll)s.size();j++){
                    if(s[j]=='S'){
                        for(ll k=j+1;k<(ll)s.size();k++){
                            if(s[k]=='G'){res++;}
                        }
                    }
                }
            }
        }
        lout(res);
    }else{
        ll h=0,hs=0,res=0;
        for(ll i=0;i<(ll)s.size();i++){
            if(s[i]=='H'){
                for(ll j=i+1;j<(ll)s.size();j++){
                    if(s[j]=='S'){
                        for(ll k=j+1;k<(ll)s.size();k++){
                            if(s[k]=='G'){
                                res++;
                            }else if(vowel(s[k])){
                                break;
                            }
                        }
                    }else if(vowel(s[j])){
                        break;
                    }
                }
            }
        }
        lout(res);
    }
}
