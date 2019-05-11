#include <stdio.h>


int opertion(int x);

int main()
{
    float a = 1, b = 5;
    float add=a+b;
    float sub=a-b;
    float mul=a*b;
    float dvi=a/b;
    int x;
   
    switch(opertion(x)){
        case 0:
            printf("%f",add);
            break;
        case 1:
            printf("%f",sub);
            break;
        case 2:
            printf("%f",mul);
            break;
        case 3:
            printf("%f",dvi);
            break;
        case 4:
            printf("Illigal operation");
            break;
}
}
    int opertion(int x){
    x=4;
    return x;
}