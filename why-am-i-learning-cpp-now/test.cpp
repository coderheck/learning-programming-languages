#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    if(n-1<=200&&n%2==0){cout<<300*(n/2);}
    if(n-1<=200&&n%2!=0){cout<<300*((n-1)/2)+250;}
    if(n-1>200&&n%2==0){cout<<280*(n/2);}
    if(n-1>200&&n%2!=0){cout<<280*((n-1)/2)+250;}
}
int test(){
    
}