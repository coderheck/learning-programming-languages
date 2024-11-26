#include"stdio.h"
#include"string.h"
#include"math.h"
char as[10000005],bs[10000005];
void comp(){
  int asize=strlen(as),bsize=strlen(bs);
  int a=as[asize-1]-'0',b=(bs[bsize-2]-'0')*10+(bs[bsize-1]-'0');
  if(b==0){printf("1");return;}
  if(a==0||a==1||a==5||a==6){
    printf("%d",a);return;
  }else if(a==4||a==9){
    b%=2;if(b==0){b=2;}
    printf("%d",(int)pow(a,b)%10);
  }else{
    if(bsize>1){
      b%=4;if(b==0){b=4;}
    }else{
      b=bs[bsize-1]-'0';
    }
    printf("%d",(int)pow(a,b)%10);
  }
}
int main(){
  scanf("%s%s",&as[0],&bs[0]);
  comp();
}