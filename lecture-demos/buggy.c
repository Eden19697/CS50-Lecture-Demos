#include <stdio.h>
#include <cs50.h>
void print_column(int height);

int main(void){
    int h1 = get_int("Height: ");
    print_column(h1);

    return 0;
}

void doi(void){
      for (int i=0;i<=3;i++){
        printf("i is %i\n",i);//debugging code
        printf("#\n");
    }
}

void print_column(int height){
    for (int i=0;i<height;i++){
        printf("#\n");
    }
}
