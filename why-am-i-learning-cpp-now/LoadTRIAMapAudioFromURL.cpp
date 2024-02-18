#include"iostream"
#include"fstream"
using namespace std;
int main(){
    string path; fstream file;
    cout<<"file path:\n";
    cin>>path;
    file.open(path.c_str());
    file<<"hello internet";
    file.close();
}
// C:\Users\datmobile\Documents\test test test.txt
// C:/Users/datmobile/Documents/test test test.txt