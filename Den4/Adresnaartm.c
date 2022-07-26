#include<stdio.h>

void printValue(void* value, int type){
    if(1 == type){
        printf("Value: %d\n",*(int*)value);
    }
    else if(2 == type){
        printf("Value: %lf\n",*(double*)value);
    }
    else if(3 == type){
        printf("Value: %c\n",*(char*)value);
    }
}

int main(){

    int num = 20; 
    //int *p = &num;
    double pi = 3.14;
    void* p;
    p = &num;
    printf("%p\n",p);
    p = &pi;
    printf("%p\n",p);
    char sym = 'Z';
    p = &sym;
    printf("%p\n",p);
    
    printValue(&num,1);
    printValue(&pi,2);
    // addr+- n*(sizeof(t))
    return 0;

    // int* p = ((int*)10);
}