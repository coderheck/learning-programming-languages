#include <iostream>
#include <string>
#include <cstddef>
using namespace std;
#define tname "thugon"
#define ll long long
#define lout(x) \
    cout<<x; \
    // cerr<<x;
string s,res;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    while(cin>>s){
        for(size_t i=0,c=1;i<s.size();){
            char t=s[i];i++;c=1;
            while(i<s.size()&&s[i]==t){c++,i++;}
            if(c==1){
                res+=t;
            }else{
                res+=to_string(c)+t;
            }
        }
        res+='\n';
    }
    lout(res);
}
