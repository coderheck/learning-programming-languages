#include <iostream>
#include "string"
using namespace std;
int main() {
    string str;
    getline(cin, str);
    int found = str.find("kien");
    if(found != str.npos){
        cout<<"big cock";
    }else{
        cout<<"dep zai";
    }
    return 0;
}
/*
nhập "vinh" in ra "dep zai"
nhập "dat superman" in ra "dep zai"
nhập "duc" in ra "dep zai"
nhập "kien" in ra big cock
*/