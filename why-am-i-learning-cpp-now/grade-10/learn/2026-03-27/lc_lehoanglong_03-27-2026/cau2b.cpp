#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#define tname "cau2b"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define upp(x) ((x)>='A'&&(x)<='Z')
#define lww(x) ((x)>='a'&&(x)<='z')
#define lout(x) \
    cout<<x<<"\n"; \
//    cerr<<x<<"\n";
bool cmpfn(const char &a,const char &b){
    if((upp(a)&&upp(b))||(lww(a)&&lww(b))){
        return a>b;
    }else{
        return a<b;
    }
}
string s;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>s;
    sort(s.begin(),s.end(),cmpfn);
    lout(s);
}
