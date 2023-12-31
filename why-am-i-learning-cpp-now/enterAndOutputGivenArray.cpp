#include "iostream"
#include "cmath"
#include "algorithm"
using namespace std;

bool compare(const int a, const int b){
   return a > b;
}

bool hoanhao(long long arg){
    long long sum=0;
    bool hh;
    for (long long i=1;i<arg;i++){
        if (arg%i==0){sum+=i;}
    }
    if(arg==sum){hh=true;}else{hh=false;}
    return hh;
}

bool chinhphuong(long long a){
    bool ch=true;
    float sq=sqrt(a);
    if(ceil(sq) != floor(sq)){ch=false;}
    return ch;
}

bool nguyento(long long n){
    bool nt=true;
    if(n<=1){nt=false;}
    for(long long i=2;i<=n/2;i++){
        if(n%i==0){nt=false;}
    }
    return nt;
}

int main(){
    int a,sum=0;
    cin>>a;
    int b[a];
    for(int i=0; i<a; i++){
        cin>>b[i];
    }

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
            if (b[i]>b[o]){swap(b[i], b[o]);} // tuong duong sort(b, b+a);
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
        if(hoanhao(b[i])==true){cout<<b[i]<<" ";}
    }

    cout<<endl<<"so chinh phuong:"<<endl;
    for (int i=0; i<a; i++){
        if(chinhphuong(b[i])==true){cout<<b[i]<<" ";}
    }

    cout<<endl<<"so nguyen to:"<<endl;
    for (int i=0; i<a; i++){
        if(nguyento(b[i])==true){cout<<b[i]<<" ";}
    }
    return 0;
}

//test with: 7 6 1 7 4 49 23 9 (copy & paste)