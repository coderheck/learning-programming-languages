#include "iostream"
using namespace std;

int main(){
    int a,sum=0;
    cin>>a;
    int b[a];
    for(int i1=0; i1<a; i1++){
        cout<<"arr["<<i1<<"] = ";
        cin>>b[i1];
    }
    for (int i2=0; i2<a; i2++){
        cout<<b[i2]<<" "<<endl;sum+=b[i2];
    }
    cout<<"sum = "<<sum;
    return 0;
}