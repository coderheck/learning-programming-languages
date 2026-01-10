#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define tname "mterchef"
#define debug(x) cout<<(x)<<" ";
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=100005;
struct food{
    ll id,val;
    bool operator<(const food &rhs)const{
        return val>rhs.val;
    }
}a[maxN];
struct foodset{
    priority_queue<food>pq;
    bool operator<(const foodset &rhs)const{
        return pq.top().id>rhs.pq.top().id;
    }
};
ll n,s,sumMax=0;
priority_queue<foodset>ff;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin>>n>>s;
    for(ll i=1;i<=n;i++){cin>>a[i].val;a[i].id=i;}
    sort(a+1,a+n+1);
    ll i=1,cur=0,maxt=0;
    while(i<=n){
        foodset fs;
        while(cur+a[i].val<=s && i<=n){
            // if(a[i].val==0){i++;continue;}
            cur+=a[i].val;
            fs.pq.push(a[i]);
            maxt=max(maxt,a[i].val);
            i++;
        }
        ff.push(fs);sumMax+=maxt;
        // debug(maxt);debug(i);
        cur=0,maxt=0;
    }
    cout<<sumMax<<"\n";
    while(ff.size()){
        foodset fs=ff.top();ff.pop();
        while(fs.pq.size()){
            if(fs.pq.top().id!=0){
                cout<<fs.pq.top().id<<" ";
            }
            fs.pq.pop();
        }
        // debug(fs.pq.top().id)
        cout<<"\n";
    }
}
