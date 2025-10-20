#include"iostream"
#include"stdio.h"
using namespace std;
int main(){
    freopen("dcs.inp","r",stdin);
    freopen("dcs.out","w",stdout);
    int t,n;cin>>t;
    for(int m=1;m<=t;m++){
        cin>>n;int a[n],dem=0;
        for(int i=0;i<n;i++){cin>>a[i];}
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(i*a[i]>j*a[j]){dem++;}
            }
        }
        cout<<dem<<"\n";
    }
}