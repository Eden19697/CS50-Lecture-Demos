#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[]){//把第一个文件的内容写到第二个文件当中
    FILE *src = fopen(argv[1], "rb");//并且抹去第二文件的内容
    FILE *dst = fopen(argv[2], "wb");//rb wb代表二进制读写

    BYTE b;

    while(fread(&b, sizeof(b), 1, src) != 0){
        // 找到 btye b 这个变量的地址，fread 二进制读取，遍历src的每个字节
        fwrite(&b, sizeof(b), 1, dst);
    }

    fclose(dst);
    fclose(src);
}
