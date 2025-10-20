#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,x,y;
main()
{
    freopen("bai2.inp","r",stdin);
    freopen("bai2.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>x>>y>>n;
    if(n%2==0)
    {
        cout<<max(x,y)/min(x,y);
    }
    else{
        cout<<max(2*x,y)/min(2*x,y);
    }
}
