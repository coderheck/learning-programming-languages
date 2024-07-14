#include "bits/stdc++.h"
using namespace std;
bool chinhphuong(int n){
    bool cp;
    if(floor(sqrt(n))==ceil(sqrt(n))){cp=true;}else{cp=false;}return cp;
}
int main(){
    int n;cin>>n;int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(chinhphuong(a[i])==true){cout<<a[i]<<" ";}
    }
}