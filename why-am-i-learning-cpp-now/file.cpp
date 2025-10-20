#include "fstream"
using namespace std;
int main(){
    fstream file;
    file.open("file.txt",fstream::out|fstream::trunc);
    file<<"KIEN BIG COCK";
    file.close();
}