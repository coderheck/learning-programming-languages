using namespace std;
#include"iostream"
int main(){
    int n[100],c=0;
    for(int i=10;i<100;i++){
        if(i%3==1 && i%5==1){n[c]=i;c++;}
    }
    for(int i=0;i<c;i++){cout<<n[i]<<" ";}
}