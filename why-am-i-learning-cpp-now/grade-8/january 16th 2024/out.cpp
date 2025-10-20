#include"bits/stdc++.h"
using namespace std;
bool nt(long long n){
    bool nt=true;
    if(n<=1){nt=false;}
    for(long long i=2;i<=n/2;i++){
        if(n%i==0){nt=false;}
    }
    return nt;
}
bool hoanhao(int a){
    bool hh = true; long long tong=0;
    for(int i = 1; i < a; i++){
        if (a % i == 0){
            tong += i;
        }
    }
    if (tong != a){
        hh = false;
    }
    return hh;
}
bool cp(long long a){
    bool s;
    if(floor(sqrt(a))==sqrt(a)&&ceil(sqrt(a))==sqrt(a)){s=true;}else{s=false;}
    return s;
}
int main(){
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout<<"cac so nguyen to trong mang: ";
    cout<<"\n";
    for(int i = 0; i < n; i++){
        if( nt(a[i]) == true ){cout<<a[i]<<" ";}
    }
    cout<<"\n";
    cout<<"cac so hoan hao trong mang: ";
    cout<<"\n";
    for(int i = 0; i < n; i++){
        if( hoanhao(a[i]) == true ){cout<<a[i]<<" ";}
    }
    cout<<"\n";
    cout<<"cac so chinh phuong trong mang: ";
    cout<<"\n";
    for(int i = 0; i < n; i++){
        if( cp(a[i]) == true ){cout<<a[i]<<" ";}
    }
}