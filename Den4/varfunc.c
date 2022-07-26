#include<stdio.h>
#include<stdarg.h>

int sum(int cnt,...){
    
    int sum=0;
    va_list args;
    va_start(args,cnt);
    for(int i=0; i<cnt; i++){
        sum += va_arg(args,int);
    }
    va_end(args);
    return 0;
}

int main(){
    sum(3,5,6,7);
    return 0;
}