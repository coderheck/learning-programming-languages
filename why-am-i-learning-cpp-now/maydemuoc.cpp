#include <iostream>
#define ll long long
#define ull unsigned long long
using namespace std;

int main(){
    ll n, demuoc, tonguoc, tichuoc, tonguocchan;
    cin>>n;
    tichuoc=1; demuoc=tonguoc=tonguocchan=0;
    for (ll i = n; i>=1; i--){
        if (n%i==0){demuoc += 1;tonguoc=tonguoc+i;tichuoc=tichuoc*i;if(i%2==0){tonguocchan+=i;}if(i%2!=0){cout<<"uoc le: "<<i<<endl;}}
    }
    cout<<"so uoc cua n: "<<demuoc<<endl;
    cout<<"tong cac uoc cua n: "<<tonguoc<<endl;
    cout<<"tich cac uoc cua n: "<<tichuoc<<endl;
    cout<<"tong cac uoc chan cua n: "<<tonguocchan;
    return 0;
}