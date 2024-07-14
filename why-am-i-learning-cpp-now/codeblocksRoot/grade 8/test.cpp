#include "bits/stdc++.h"
using namespace std;

bool isPerfect(long long arg){
    long long sum=0;
    bool isperfect;
    for (long long i=1;i<arg;i++){
        if (arg%i==0){sum+=i;}
    }
    if(arg==sum){isperfect=true;}else{isperfect=false;}
    return isperfect;
}

bool isSquare(long long a){
    bool issquare=true;
    float sqrtofarg=sqrt(a);
    if(ceil(sqrtofarg) == floor(sqrtofarg) == sqrtofarg){issquare=true;}else{issquare=false;}
    return issquare;
}

bool isPrime(long long n){
    bool isprime=true;
    if(n<=1){isprime=false;}
    for(long long i=2;i<=n/2;i++){
        if(n%i==0){isprime=false;}
    }
    return isprime;
}

int main(){
    int a,sum=0;
    cin>>a;
    int b[a];
    for(int i=0; i<a; i++){
        cin>>b[i];
    }

    /*for (int i=0; i<a; i++){
        cout<<b[i]<<" "<<endl;sum+=b[i];
    }*/

    cout<<endl<<"so chan:"<<endl;
    for (int i=0; i<a; i++){
        if (b[i]%2==0){cout<<b[i]<<" "<<endl;sum+=b[i];}
    }

    cout<<endl<<"so le:"<<endl;
    for (int i=0; i<a; i++){
        if (b[i]%2!=0){cout<<b[i]<<" "<<endl;sum+=b[i];}
    }

    cout<<endl<<"so chia het cho 2 va 5:"<<endl;
    for (int i=0; i<a; i++){
        if (b[i]%2==0&&b[i]%5==0){cout<<b[i]<<" "<<endl;sum+=b[i];}
    }

    // sap xep bien
    for (int i=0; i<a; i++){
        for (int o=i; o<a; o++){
            if (b[i]>b[o]){swap(b[i], b[o]);}
        }
    }

    cout<<endl<<"tang dan:"<<endl;
    for (int i=0; i<a; i++){
        cout<<b[i]<<" ";
    }

    cout<<endl<<"giam dan:"<<endl;
    for (int i=a-1; i>=0; i--){
        cout<<b[i]<<" ";
    }

    cout<<endl<<"so hoan hao:"<<endl;
    for (int i=0; i<a; i++){
        if(isPerfect(b[i])==true){cout<<b[i]<<" ";}
    }

    cout<<endl<<"so chinh phuong:"<<endl;
    for (int i=0; i<a; i++){
        if(isSquare(b[a])==true){cout<<b[i]<<" ";}
    }

    cout<<endl<<"so nguyen to:"<<endl;
    for (int i=0; i<a; i++){
        if(isPrime(b[i])==true){cout<<b[i]<<" ";}
    }
    return 0;
}

//test with: 6 6 1 7 4 49 23 (copy & paste)
