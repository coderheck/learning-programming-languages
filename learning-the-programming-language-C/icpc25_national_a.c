#include <stdio.h>
const char *str[5]={
    "Uphold integrity and ethics throughout the contest.",
    "Do not seek or receive external help from people, platforms, tools or AI.",
    "Follow all ICPC rules and guidelines, accept decisions made by organizers and judges as final.",
    "Show good sportmanship and treat competitors, volunteers, staff and judges with respect.",
    "Compete with creativity and teamwork, honor the contest spirit and pursue excellence.",
};
int main(){
    int idx;
    scanf("%d",&idx);
    printf("%s",str[idx-1]);
}
