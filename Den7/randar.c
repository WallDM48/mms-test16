#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"randoms.h"

#define COUNT 10

int compareInt1(const void* num1, const void* num2){
    return fabs(*(int*)num1)-fabs(*(int*)num2);
}

int main(){
    int (*myComparator)(const void*,const void*);
    myComparator= compareInt1;
    printf("%p\n",myComparator);
    randinit();
    int numbers[COUNT];
    for(int i = 0;i < COUNT; i++){
    numbers[i] = randInt(-100,100);

    }
    qsort(numbers,COUNT,sizeof(int),myComparator);
    for(int i = 0; i<COUNT;i++){
        printf("%d\n", numbers[i]);
    }
      return 0;
}