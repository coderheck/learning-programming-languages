#include <bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;
int n,m;
vector<pii>g[1000005];
struct node
{
    int u,v,w;
}ed[1000005];
int tc;
int dicktra()
{
    vector<int>dist(n+1,LLONG_MAX);
    priority_queue<pii,vector<pii>,greater<pii>>q;
    q.push({0,1});
    dist[1]=0;
    while(!q.empty())
    {
        auto [dicku,u]=q.top();q.pop();
        if(dicku!=dist[u])
        {
            continue;
        }
        for(auto x:g[u])
        {
            int v=x.first,id=x.second,w=ed[id].w;
            if(dist[v]>dist[u]+w)
            {
                dist[v]=dist[u]+w;
                q.push({dist[v],v});
            }
        }
    }
    return dist[n];
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    if(fopen(".INP", "r"))
    {
        freopen(".INP", "r", stdin);
        freopen(".OUT", "w", stdout);
    }
    cin>>tc;
    while(tc--)
    {
        for (int i=1;i<=n;i++)
        g[i].clear();

        cin>>n>>m;
        for(int i=1;i<=m;i++)
        {
            cin>>ed[i].u>>ed[i].v>>ed[i].w;
            g[ed[i].u].push_back({ed[i].v,i});
            g[ed[i].v].push_back({ed[i].u,i});
        }
        int pre=dicktra();
        vector<int>ans;
        for(int i=1;i<=m;i++)
        {
            ed[i].w+=2;
            if(dicktra()==pre+1)
            {
                ans.push_back(i);
            }
            ed[i].w-=2;
        }
        cout<<ans.size()<<'\n';
        for(auto x:ans) cout<<x<<' ';
        cout<<'\n';
    }
}
