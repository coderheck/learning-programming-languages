// #include"iostream"
// using namespace std;
// #define ll long long
// #define maxN 100000
// int n,q,type,p,m,x,u,v;
// ll a[maxN+5];
// int main(){
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   cin>>n>>q;
//   for(int i=1;i<=n;i++){cin>>a[i];}
//   while(q--){
//     cin>>type;
//     if(type==1){
//       cin>>p>>m>>x;
//       for(int i=p;i<=m;i++){a[i]+=x;}
//     }else{
//       ll sum=0;
//       cin>>u>>v;
//       for(int i=u;i<=v;i++){sum+=a[i];}
//       cout<<sum<<"\n"; 
//     }
//   }
// }
#include"iostream"
#define N 100000
#define ll long long
using namespace std;
struct node
{
    ll sum, value;
};

ll a[N+2];
node T[4*N + 2];
int n,q;

void update (int x, int dau, int cuoi, int l, int r, ll val)
{
    if (cuoi < l or r < dau)
    {
        return;
    }
    if (l <= dau and cuoi <= r)
    {
        T[x].value += val;
        T[x].sum += val * (cuoi - dau + 1);
        return;
    }
    int mid = (dau + cuoi) / 2;
    T[2*x].value += T[x].value;
    T[2*x].sum += T[x].value * (mid - dau + 1);
    T[2*x + 1].value += T[x].value;
    T[2*x + 1].sum += T[x].value * (cuoi - mid);
    T[x].value = 0;
    update(2*x, dau, mid, l, r, val);
    update(2*x + 1, mid + 1, cuoi, l ,r , val);
    T[x].sum = T[2*x].sum + T[2*x + 1].sum;
}

ll get(int x, int dau, int cuoi, int l, int r)
{
    if (r < dau or cuoi < l) 
    {
        return 0;
    }
    if (l <= dau and cuoi <= r)
    {
        return T[x].sum;
    }
    int mid = (dau + cuoi) / 2;
    T[2*x].value += T[x].value;
    T[2*x].sum += T[x].value * (mid - dau + 1);
    T[2*x + 1].value += T[x].value;
    T[2*x + 1].sum += T[x].value * (cuoi - mid);
    T[x].value = 0;
    ll t1 = get(2*x, dau , mid, l ,r );
    ll t2 = get(2*x + 1, mid + 1, cuoi, l , r);
    return t1 + t2;
}

int main()
{
    cin >> n >> q;
    for (int i =1 ; i <= n; i++)
    {
        ll x;
        cin >> x;
        a[i] = a[i-1] + x;
    }
    for (int i =1; i <= q; i++)
    {
        int k,l,r,x;
        cin >> k >> l >> r;
        if (k == 1)
        {
            cin >> x;
            update(1,1,n,l,r,x);
        }
        else{
            cout << get(1,1,n,l,r) + a[r] - a[l-1] << "\n";
        }
    }
    return 0;
}