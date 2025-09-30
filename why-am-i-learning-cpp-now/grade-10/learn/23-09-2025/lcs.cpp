#include<iostream>
#include<vector>
#include<string>
using namespace std;
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=105;
ll m,n,ap[maxN],bp[maxN],dp[maxN][maxN],bac[maxN][maxN],sz=0;
string a,b,lcs;
void truyvetLast(){
    ll i=m,j=n;
    while(i>0&&j>0){
        if(a[i]==b[j]){
            lcs.push_back(a[i]);
            ap[sz]=i,bp[sz]=j;
            sz++,i--,j--;
        }else{
            if(dp[i-1][j]>=dp[i][j-1]){i--;}else{j--;}
        }
    }
}
void truyvetFirst(){
    for(ll i=1;i<=m;i++){
        for(ll j=1;j<=n;j++){
            cout<<bac[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin>>a>>b;m=a.size(),n=b.size();a="#"+a,b="#"+b;
    for(ll i=1;i<=m;i++){
        for(ll j=1;j<=n;j++){
            if(a[i]==b[j]){
                dp[i][j]=dp[i-1][j-1]+1;
                bac[i][j]=dp[i-1][j-1];
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    truyvetLast();
//    truyvetFirst();
    cout<<lcs<<"\n";
    for(ll i=sz-1;i>=0;i--){cout<<ap[i]<<" ";}
    cout<<"\n";
    for(ll i=sz-1;i>=0;i--){cout<<bp[i]<<" ";}
}
