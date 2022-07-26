#include<stdio.h>

#define bool char
#define true 1
#define false 0

#define PRINTNUM(n) printf("%d\n", num##n)

int main(){
    bool isOdd = false;
    if(isOdd){
        puts("True\n");
    }
    else {
        puts("False\n");
    }
    int num1 =10;
    int num2 = 20;
    int num3 = 30;
    return 0; 
}