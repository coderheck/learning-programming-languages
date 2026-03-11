#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define tname "nhiphan1"
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n";
ll n;
vector<string>res;
void backt(string s){
    if((ll)s.size()==n){res.push_back(s);return;}
    if(s[s.size()-1]=='0'){
        backt(s+"0");
    }else{
        backt(s+"1");backt(s+"0");
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    #endif
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    backt("0");backt("1");
    sort(res.begin(),res.end());
    for(const string &x:res){lout(x);}
}
