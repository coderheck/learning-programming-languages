#include "iostream"
#include "string"
using namespace std;

struct {
    string name;
    string message;
} ltg;

ltg.name = "lowtiergod";
ltg.message = "kill yourself";

int main(){
    cout<<ltg.name<<" says "<<ltg.message;
    
}