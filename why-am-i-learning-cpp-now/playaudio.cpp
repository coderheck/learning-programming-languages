#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
using namespace std;

int main(){
    mciSendString(TEXT("play windowscare.wav"), NULL, 0, NULL);
}