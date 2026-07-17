#include <stdio.h>

int main(void){
    char s[4];
    printf("s: ");
    scanf("%s", s);//给n的obj的地址才能改变n的值
    printf("s: %s\n", s);
}
