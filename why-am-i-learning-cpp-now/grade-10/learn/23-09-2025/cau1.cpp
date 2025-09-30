#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
ll n,res=0,a,k,r;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    while(n--){
        cin>>a;
        k=8LL*a+1;r=(ll)sqrt(k);
        res+=(k==r*r);
    }
    cout<<res;
}
