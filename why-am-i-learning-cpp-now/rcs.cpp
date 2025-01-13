#include<iostream>
#include<windows.h>
#include<filesystem>
using namespace std;
namespace fs=filesystem;
int main(){
  const char *subkey="roblox-player\\shell\\open\\command";
  const char *valname="version";
  char buffer[256];
  DWORD buffersize=sizeof(buffer);
  if(ERROR_SUCCESS==RegGetValueA(HKEY_CLASSES_ROOT,subkey,valname,RRF_RT_REG_SZ,nullptr,buffer,&buffersize)){
    cout<<"Value: "<<buffer<<"\n";
  }else{
    cerr<<"fucking dies";
    return 1;
  }
  fs::path robloxPath="C:/Program Files (x86)/Roblox/Versions";
  robloxPath/=buffer; //append version
  robloxPath/="ClientSettings"; //append "ClientSettings"
  error_code err;
  if(fs::exists(robloxPath)){
    cout<<"found current ClientSettings, attempting to delete...\n";
    fs::remove_all(robloxPath,err);
    if(err){
      cerr<<"sum shit happened while deleting current ClientSettings: "<<err.message();
      return 1;
    }
    cout<<"delete success\n";
  }
  fs::path srcPath="ClientSettings"; //folder to copy
  try{
    fs::copy(srcPath,robloxPath,fs::copy_options::recursive|fs::copy_options::overwrite_existing);
  }catch(const fs::filesystem_error &e){
    cerr<<"sum shit happened while copying new ClientSettings: "<<e.what();
    return 1;
  }
  cout<<"success";
}