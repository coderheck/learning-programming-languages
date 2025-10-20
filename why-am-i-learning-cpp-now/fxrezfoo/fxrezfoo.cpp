#include"fstream"
#include"iostream"
#include"string"
#include"windows.h"
using namespace std;
int main(int argCount, char *argValue[]){
	string toAdd="";
	if(argCount==1){
		cout<<"you didnt specify any arguments, now type (or paste) the new name here: ";
		getline(cin,toAdd);
		fstream ffile("C:\\Users\\longnuub\\Documents\\fxrezfoo.txt",ios::app);
		ffile<<toAdd<<"\n";
		ffile.close();
		system("\"C:\\Users\\longnuub\\Documents\\fxrezfoo.txt\"");
		return 0;
	}else if(argCount==2&&strcmp(argValue[1],"--file")==0){
        cout<<"found open file command as the first arg, ignoring non-option args";
		system("\"C:\\Users\\longnuub\\Documents\\fxrezfoo.txt\"");
		return 0;
	}else{
		for(int i=1;i<argCount;i++){
			if(i+1!=argCount){toAdd=toAdd+argValue[i]+" ";}else{toAdd=toAdd+argValue[i];}
		}
		fstream ffile("C:\\Users\\longnuub\\Documents\\fxrezfoo.txt",ios::app);
		ffile<<toAdd<<"\n";
		ffile.close();
		system("\"C:\\Users\\longnuub\\Documents\\fxrezfoo.txt\"");
		return 0;
	}
	return 0;
}