#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void){
    char *s = get_string("s: ");

    char *t = malloc(strlen(s)+1);
    if (t == NULL){//保证内存的有空间
        return 1;
    }

    for (int i = 0, n = strlen(s); i<=n;i++){
        t[i] = s[i];
    }

    if(strlen(t) > 0){//防止用户错误输入，直接按回车，防御措施
        t[0] = toupper(t[0]);
    }


    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
