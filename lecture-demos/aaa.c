#include <stdio.h>

char* bad_function() {
    char s[4] = "hi";    // 栈内存
    return s;            // 错误！函数返回后s就无效了
}

int main() {
    char *result = bad_function();  // 危险！悬空指针
    printf("%s\n", result);         // 未定义行为
    return 0;
}
