#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i1=0; i1<a; i1++){
        cin>>arr[i1];
    }
    for (int i2=0; i2<a; i2++){
        cout<<arr[i2]<<" ";
    }
    return 0;
}