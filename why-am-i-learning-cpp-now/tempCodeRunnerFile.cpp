#include <iostream>
using namespace std;

int main(){
    unsigned long long n, tn;
    tn=1;
    cin>>n;
    for (unsigned long long i = 1; i<=n; i++){
        tn = tn * i;
    }
    cout<<"t"<<"("<<n<<")"<<" = "<< tn;
    return 0;
}