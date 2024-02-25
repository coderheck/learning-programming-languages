#include"cstdlib"
#include"string"
using namespace std;
int main(){
    string cmd;
    #ifdef _WIN32
    cmd="start code-insiders";
    #else
    cmd="open code-insiders";
    #endif
    system(cmd.c_str());
}