#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,t,dem;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(t<n){
        t+=t+3;
        dem++;
    }
    t-=dem+3*dem;
    if(n-t>=3*dem) cout<<"Bin";
    else cout<<"Bon";
}
