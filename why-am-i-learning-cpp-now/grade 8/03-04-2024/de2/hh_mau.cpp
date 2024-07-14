#include <bits/stdc++.h>

using namespace std;
int tong(int n){
       int sum=0;
       while(n>0){
        sum+=n%10;
        n=n/10;
       }
    if(sum==10)return 1;
    else return 0;
}
int k;
int dem=0;
int a[100002];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("HH.inp","r", stdin);
    freopen("HH.out","w", stdout);
    cin>>k;
    for(int i=1; ;i++){
       if(tong(i)==1){
           dem++;
           a[dem]=i;
           if(k==dem){cout<<a[k];
                      break;
            }
       }
    }
    return 0;
}