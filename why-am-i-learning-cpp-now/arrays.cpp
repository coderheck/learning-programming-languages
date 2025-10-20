#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int arr[5][5]={{1, 13, 29, 10, 30},{19, 28, 67, 99, 12}}; //two-dimensional array
    int arr1[5]={2, 3, 9, 10, 18}; //one-dimensional array
    for (int i1=0; i1<=2-1; i1++){
        for (int i2=0; i2<=4; i2++){
            cout<<arr[i1][i2]<<" ";
        }
        cout<<endl;
    }
    for (int i1=0;i1<=5-1;i1++){
        cout<<arr1[i1]<<" ";
    }
    cout<<endl;
}