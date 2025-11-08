#include<bits/stdc++.h>

#define ll long long

const ll INF = 1e18;
const ll maxn = 1e5;

ll n;
ll a[maxn + 2];
ll sum[maxn + 2];
ll cnt = 0;
ll res = 0;
ll max1;

void INP()
{
    std::cin>>n;
    for(ll i=1; i<=n; i++)
    {
        std::cin>>a[i];
    }
}
void OUT()
{
    std::cout<<cnt<<"\n"<<res;
}
void sub12()
{
    std::sort(a+1,a+1+n);


    for(ll i=1; i<=n; i++)
    {
        max1 = -INF;
        for(ll j=i+1; j<=n; j++)
        {
            ll tb = (a[i] + a[j])/2;
            if((a[i] + a[j])%2==0)
            {
                ll d = (a[i] + a[j])/ 2;
                ll k = std::lower_bound(a+1,a+1+n,d) - a;
                if(tb == a[k])
                {
                    cnt++;
                    ll triangle = a[i] + a[j] + a[k];
                    max1 = std::max(max1,triangle);
                }
            }
        }
        res =std::max(res,max1);
    }
}
int main()
{
    if(fopen("ATRISET.INP","r"))
    {
        freopen("ATRISET.INP","r",stdin);
        freopen("ATRISET.OUT","r",stdout);
    }

    INP();
    sub12();
    OUT();

}
