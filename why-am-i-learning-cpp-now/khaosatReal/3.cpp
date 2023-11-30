#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long sotien, motngan, haingan, namngan, haimuoingan, nammuoingan, tongsoto=5; //what
    for (long long motngan1=0;motngan1<=sotien;sotien++){
        for (long long haingan1=0;motngan1<=sotien;sotien++){
            for (long long namngan1=0;motngan1<=sotien;sotien++){
                for (long long haimuoingan1=0;motngan1<=sotien;sotien++){
                    for (long long nammuoingan1=0;motngan1<=sotien;sotien++){
                        if ((1*motngan1) + (2*haingan1) + (5*namngan1) + (20*haimuoingan1) + (50*nammuoingan1) == sotien && motngan1+haingan1+namngan1+haimuoingan1+nammuoingan1 < tongsoto){
                            
                        }
                    }
                }
            }
        }
    }
    return 0;
}