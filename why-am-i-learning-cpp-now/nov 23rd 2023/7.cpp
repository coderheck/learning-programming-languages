#include <iostream>
using namespace std;

int main(){
    long long d, n, g, t, c;
    bool isDoable;
    cin>>t>>c;
    for (long long d1=1;d1<=t;d1++){
        for (long long n1=1;n1<=t;n1++){
            for (long long g1=1;g1<=t;g1++){
                if ( (d1*5)+(n1*3)+(g1/3)==c and d1+n1+g1==t ){cout<<d1<<" "<<n1<<" "<<g1<<endl;isDoable=true;}
            }
        }
    }
    if (isDoable==false){cout<< -1;return 0;}else{return 0;}
}