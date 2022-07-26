#include<stdio.h>
#include<stdlib.h>
#include"randoms.h"

int main(){
    randinit();
    for(int i=0; i<10; i++){
    //printf("%.2lf\n",randReal(1.5,5.5));
    printf("%c\n",randInt('a','z'));
    }
    return 0;
}
