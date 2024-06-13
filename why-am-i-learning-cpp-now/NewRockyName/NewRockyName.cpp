#include"fstream"
#include"iostream"
#include"string"
#include"windows.h"
using namespace std;
int main(int argCount, char *argValue[]){
	string toAdd="";
	fstream ffile("C:\\Users\\datmobile\\Documents\\rocky names.txt",ios::app);
	if(argCount==1){
		cout<<"you didnt specify any arguments, now type (or paste) the new name here: ";
		getline(cin,toAdd);
		ffile<<toAdd<<"\n";
		ffile.close();
		system("\"C:\\Users\\datmobile\\Documents\\rocky names.txt\"");
	}else{
		for(int i=1;i<argCount;i++){
			if(i+1!=argCount){toAdd=toAdd+argValue[i]+" ";}else{toAdd=toAdd+argValue[i];}
		}
		ffile<<toAdd<<"\n";
		ffile.close();
		system("\"C:\\Users\\datmobile\\Documents\\rocky names.txt\"");
	}
}