#include <stdio.h>

float arithmetic(float x, float y, int operation);

int main()
{
    float x = 1, y = 5;
    int operation = 2;
    
    float result=arithmetic(x,y, operation);
    
    if (operation < 4 && operation >=0){
        printf("%f",result);
    }
}   
float arithmetic(float x, float y, int operation){
    float r;
    switch(operation){
        case 0:
            r=x+y;
            return r;
            break;
        case 1:
            r=x-y;
            return r;
            break;
        case 2:
            r=x*y;
            return r;
            break;
        case 3:
            r=x/y;
            return r;
            break;
        default:
            printf("Illegal operation %d ", operation);
            return 0;
    }
}