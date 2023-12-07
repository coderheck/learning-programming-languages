#include "bits/stdc++.h"
using namespace std;
int main(){
    int a,sum=0;
    cin>>a;
    int b[a];
    for(int i=0; i<a; i++){
        cout<<"b["<<i<<"] = ";
        cin>>b[i];
    }
    for (int i=0; i<a; i++){
        cout<<b[i]<<" "<<endl;sum+=b[i];
    }
    cout<<endl<<"tang dan:"<<endl;
    for (int i=0; i<a; i++){
        //if (b[i]>b[i+1]){swap(b[i], b[i+1]);}
        for (int o=i; o<a; o++){
            if (b[i]>b[o]){swap(b[i], b[o]);}
        }
    }
    for (int i=0; i<a; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl<<"giam dan:"<<endl;
    for (int i=a-1; i>=0; i--){
        cout<<b[i]<<" ";
    }
    return 0;
}