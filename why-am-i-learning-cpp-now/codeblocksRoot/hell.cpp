#include "iostream"
#include "string"
using namespace std;

int main(){
    int n;
    cin>>n;
    // do while structure
    // syntax:
    do {
        //whatever
        if (n<0){cout<<"nhap lai sao cho n > 0"<<endl;cin>>n;}
    }
    while (/*condition*/n<0);
    return 0;
}
