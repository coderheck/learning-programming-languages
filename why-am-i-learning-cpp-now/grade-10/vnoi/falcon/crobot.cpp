#include <stdio.h>
#define tname "crobot"
#define ii int
#define lout(a) fprintf(stdout,"%d",res);fprintf(stderr,"%d",res);
ii s,a,b,x,curTime,res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    scanf("%d%d%d%d",&s,&a,&b,&x);
    curTime=a;
    while(x>0){
        if(!curTime){
            x-=b;
            curTime=a;
            if(x<=0){break;}
        }else{
            res+=s,curTime--,x--;
        }
    }
    lout(res);
}
