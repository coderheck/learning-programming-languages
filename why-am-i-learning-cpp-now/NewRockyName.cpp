#include"stdio.h"
using namespace std;
int main(){
    FILE* ffile;
    char str[1024];
    fgets(str,1024,stdin);
    ffile = fopen("C:/Users/datmobile/Documents/rocky names.txt", "a");
    fputs(str,ffile);
    fclose(ffile);
}