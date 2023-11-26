#include <iostream>
using namespace std;

int main(){
    long long a,b,c;
    cin>>a>>b;
    /*for (long long a1=0;a1>=1;a1++){
        for (long long b1=0;b1>=1;b1++){
            if ((a*a1)==(b*b1)){cout<<(a*a1);}
        }
    }*/
    c=a*b;
    while(a!=b){if(a>b){a-=b;}else{b-=a;}}
    c=c/a;
    cout<<c;
    return 0;
}