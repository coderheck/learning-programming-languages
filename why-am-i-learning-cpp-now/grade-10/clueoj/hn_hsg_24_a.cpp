#include <stdio.h>
// using namespace std;
#define tname "khoaso"
#define ll long long
#define abs(a) ((a)<0?(a)*-1:(a))
#define lout(fmt,...) \
    fprintf(stdout,fmt"\n",__VA_ARGS__); \
    // fprintf(stderr,fmt"\n",__VA_ARGS__);
#define oout(fmt,...) \
    fprintf(stdout,fmt" ",__VA_ARGS__); \
    fprintf(stderr,fmt" ",__VA_ARGS__);
/*
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n";
*/
/*
// #define oout(x) \
//     cout<<x<<" "; \
//     cerr<<x<<" ";
*/
int a,b,c,d,
    ac_min[10]={2,1,0,1,2,3,4,5,4,3},
    b_min[10]={0,1,2,3,4,5,4,3,2,1},
    d_min[10]={5,4,3,2,1,0,1,2,3,4};
int main(){
    // if(fopen(tname".inp","r")){
    //     freopen(tname".inp","r",stdin);
    //     freopen(tname".out","w",stdout);
    // }
    // cin.tie(0)->sync_with_stdio(0);
    // cin>>a>>b>>c>>d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    // cách 1:
    // a=min(abs(a-2),10-a+2);
    // b=min(b,10-b);
    // c=min(abs(c-2),10-c+2);
    // d=min(abs(d-5),10-d+5);

    // cách 2:
    lout("%d",ac_min[a]+b_min[b]+ac_min[c]+d_min[d]);
    // oout("%d %d %d %d",a,b,c,d);
}
