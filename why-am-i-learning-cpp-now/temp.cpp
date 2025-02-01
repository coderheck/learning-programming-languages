#include"iostream"
#include"windows.h"
#include"filesystem"
using namespace std;
int main(){
  wchar_t path[2048]={0};
  GetModuleFileNameW(nullptr,path,2048);
  cout<<std::filesystem::path(path).parent_path();
}