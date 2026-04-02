#include <iostream>
#include <string>
#include <cstring>
// #include <algorithm>
using namespace std;
#define tname "numbers"
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n";
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll modN=1000000007;
void addz(string &n, int len){
    // reverse(n.begin(),n.end());
    while((int)n.size()<len){
        n.insert(n.begin(),'0');
    }
    // reverse(n.begin(),n.end());
}
void eql(string &a, string &b){
    int len=max(a.size(),b.size());
    addz(a,len);addz(b,len);
}
void delz(string &n){
    // reverse(n.begin(),n.end());
    while(n.size()>=2){
        if(n.front()=='0'){n.erase(0,1);}else{break;}
    }
    // reverse(n.begin(),n.end());
}
string operator - (string a, string b){
    eql(a,b);
    int len=a.size();
    string c;int rem=0;
    for(int i=len-1;i>=0;i--){
        int x=(a[i]-'0')-(b[i]-'0')-rem;
        if(x<0){x+=10;rem=1;}else{rem=0;}
        c.push_back(x+'0');
    }
    reverse(c.begin(),c.end());
    delz(c);
    return c;
}
ll dp[1005][2][10]; // [pos][sml][lst]
string x;
ll sol(ll pos,bool sml,ll lst){
    if(pos==(ll)x.size()){return true;} // vị trí cuối cùng chắc chắn đã sort
    if(dp[pos][sml][lst]!=-1){return dp[pos][sml][lst]%modN;}
    ll lim=sml?(x[pos]-'0'):9,res=0;
    for(ll d=0;d<=lim;d++){
        if(d<lst){continue;}
        res=(res+sol(pos+1,sml&&(d==lim),d))%modN;
    }
    return dp[pos][sml][lst]=res;
}
ll c(string a){
    // không cần xử lí trường hợp a<=0 vì 1<=L
    x=a;
    memset(dp,-1,sizeof dp);
    return sol(0,1,0);
}
string a,b;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>a>>b;
    // lout(b<<" "<<b-"1");
    lout(c(b)-c(a-"1"));
}
