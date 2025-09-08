#include"iostream"
#include"filesystem"
#include"string"
using namespace std;
namespace fs = filesystem;
int main(){
  string discordRoot = "C:\\Users\\datmobile\\AppData\\Local\\Discord";
  string toFind = "Discord.exe";
  for(const auto &entry : fs::recursive_directory_iterator(discordRoot)){
    string filename = entry.path().filename().string();
    if(filename == toFind){
      string discordDir = fs::absolute(entry.path()).string();
      cout<<discordDir;
      system(discordDir.c_str());
      break;
    }
  }
}
