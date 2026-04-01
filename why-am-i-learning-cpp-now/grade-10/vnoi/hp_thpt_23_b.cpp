#include <stdio.h>
#include <string.h>
#define tname "hp_thpt_23_b"
#define lout(fmt,...) \
    fprintf(stdout,fmt"\n",__VA_ARGS__); \
    // fprintf(stderr,fmt"\n",__VA_ARGS__);
char s[255];
int n,res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    scanf("%s",s);
    n=strlen(s);
    for(int i=0;i<n;i++){
        if(s[i]>='0'&&s[i]<='9'){res++;}
    }
    lout("%d",res);
}
