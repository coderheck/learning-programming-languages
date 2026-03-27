#include<iostream>
#include<string>
using namespace std;
#define tname "cau2a"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
//    cerr<<x<<"\n";
string s,uoc="";
ll n,i=0;
bool check(string st){
    string tmp;
    while(tmp.size()<s.size()){tmp+=st;}
    return(tmp==s);
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>s;n=s.size();
    while(i<n){
        uoc.push_back(s[i]);
        if(check(uoc)){lout(uoc);return 0;}
        i++;
    }
}
