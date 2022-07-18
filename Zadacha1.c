#include<stdio.h>
#include<stdarg.h>

size_t onesCount(size_t count, ...){

    va_list args;
    va_start(args,count);
    int c=0;
    int sumof1=0;
    for(int i=0;i<count;i++){
        int n=va_arg(args,int);
        for(int j=0;j<sizeof(int)*8;j++){
            sumof1 += !!(n&(1u<<j));
        }
         
    }
    va_end(args);
    return sumof1;


}

int main(){

    printf("%lu\n",onesCount(3,0xff,0x131,0xaaaa));

    return 0;
}