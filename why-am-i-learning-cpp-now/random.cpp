#include <bits/stdc++.h>
using namespace std;
long long n,x,res=0;
pair<long long,long long>a[106];
int main()
{
    cin>>x>>n;
    for(int i=0;i<n;i++) cin>>a[i].second>>a[i].first;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i].first<x){
            long long t=a[i].first*a[i].second;
            x=x-a[i].first;
            res=res+t;
            cout<<x<<'\n';
        }
        else{
            res=res+x*a[i].second;
            break;
        }
    }
    cout<<res;
    return 0;
}