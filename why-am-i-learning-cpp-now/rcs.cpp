#include<iostream>
#include<windows.h>
#include<filesystem>
namespace fs=std::filesystem;
int main(){
  const char *subkey="roblox-player\\shell\\open\\command";
  const char *valname="version";
  char buffer[256];
  DWORD buffersize=sizeof(buffer);
  if(ERROR_SUCCESS==RegGetValueA(HKEY_CLASSES_ROOT,subkey,valname,RRF_RT_REG_SZ,nullptr,buffer,&buffersize)){
    std::cout<<"version: "<<buffer<<"\n";
  }else{
    std::cerr<<"fucking dies";
    return 1;
  }
  fs::path robloxPath="C:\\Program Files (x86)\\Roblox\\Versions";
  robloxPath/=buffer; //append version
  robloxPath/="ClientSettings"; //append "ClientSettings"
  std::error_code err;
  if(fs::exists(robloxPath)){
    std::cout<<"found current ClientSettings, attempting to delete...\n";
    fs::remove_all(robloxPath,err);
    if(err){
      std::cerr<<"sum shit happened while deleting current ClientSettings: "<<err.message();
      return 1;
    }
    std::cout<<"delete success\n";
  }
  wchar_t settingsPath[1024] = {0};
  GetModuleFileNameW(nullptr,settingsPath,1024);
  fs::path srcPath = fs::path(settingsPath).parent_path()/"ClientSettings/ClientAppSettings.json"; //file to copy
  try{
    fs::create_directories(robloxPath);
  }catch(const fs::filesystem_error &e){
    std::cerr<<"sum shit happened while making new ClientSettings folder: "<<e.what();
  }
  try{
    fs::copy_file(srcPath,robloxPath/srcPath.filename(),fs::copy_options::overwrite_existing);
  }catch(const fs::filesystem_error &e){
    std::cerr<<"sum shit happened while copying new ClientSettings: "<<e.what();
    return 1;
  }
  std::cout<<"copy ClientSettings success";
}