#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#define tname "kieumoi"
#define ll long long
#define upp(x) ((x)>='A'&&(x)<='Z')
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n";
ll q,i;string s,res;bool fst=true;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>q;cin.ignore();
    while(q--){
        getline(cin,s);
        stringstream ss(s);
        res.clear();
        while(ss>>s){
            fst=true;
            for(i=0;i<(ll)s.size();){
                if(upp(s[i])){
                    if(fst){
                        s[i]+=32;
                        fst=false;
                        i++;
                    }else{
                        s[i]+=32;
                        s.insert(s.begin()+i,'_');
                        i++;
                    }
                }else{
                    fst=false;
                    i++;
                }
            }
            res+=s+" ";
        }
        lout(res);
    }
}
