#include <iostream>
using namespace std;

int main(){
    unsigned long long n, tonguoc;
    tonguoc = 0;
    cin >> n;
    for (unsigned long long i = 1; i<=n-1; i++){
        if (n%i==0){
            cout<<i<<endl;
            tonguoc = tonguoc + i;
        }
    }
    cout<<tonguoc<<endl;
    if(tonguoc>n){cout<<1;}else{cout<<0;}
    return 0;
}