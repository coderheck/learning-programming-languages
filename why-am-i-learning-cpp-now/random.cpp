#include"iostream"
#include"random"
#include"windows.h"
using namespace std;
int main(){
    random_device rd;
    minstd_rand entropySource(rd());
    while(true){
        cout<<generate_canonical<long double,3>(entropySource)<<" ";
        Sleep(500);
        cout<<generate_canonical<long double,3>(entropySource)<<" ";
        Sleep(500);
        cout<<generate_canonical<long double,3>(entropySource)<<" ";
        Sleep(500);
        cout<<generate_canonical<long double,3>(entropySource)<<" ";
        Sleep(500);
        cout<<generate_canonical<long double,3>(entropySource)<<" ";
        Sleep(500);
        cout<<"\n";
    }
}