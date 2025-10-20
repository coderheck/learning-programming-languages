#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;cin>>n;int input[n];
    for(int i=0;i<n;i++){cin>>input[i];}
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){if(input[i]<input[j]){swap(input[i],input[j]);}}
    }
    for(int i=0;i<n;i++){cout<<input[i];}
    cout<<"\n";
    for(int i=n-1;i>=0;i--){cout<<input[i];}
}

/*
9 1 0 0 2 3 4 9 1 9
*/