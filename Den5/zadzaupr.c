#include<stdio.h>
#include<stdarg.h>

size_t bitsNCount(size_t count, size_t bitscnt, ...){

    va_list args;
    va_start(args,bitscnt);
    int c=0;
    int sumof1=0;
    for(int i=0;i<count;i++){
        int n=va_arg(args,int);
        for(int j=0;j<sizeof(int)*8;j++){
            sumof1 += !!(n&(1u<<j));
        }
         if(sumof1==bitscnt){
            c++;
        }
        sumof1=0;
    }
    va_end(args);
    return c;


}

int main(){

    printf("%lu\n",bitsNCount(3,8,0xff,255,43690));

    return 0;
}