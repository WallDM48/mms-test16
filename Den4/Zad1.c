#include<stdio.h>
#include<stdint.h>

int main(){
    // mask=mask |(1<<bit); set bit = mask|=(1<<bit)
    // clear bit mask&=~(1<<bit);
    // check bit !!mask&(1<<bit);
    // flip bit mask^=(1<<bit);
    uint16_t mask=0;
    int bit=1;
    mask|=(1<<bit);
    bit =5;
    mask|=(1<<bit);
    bit=10;
    mask|=(1<<bit);
    bit =5;
    mask&=~(1<<bit);
    for(int b=sizeof(mask)*__CHAR_BIT__-1;b>=0;b--){

        printf("%d",!!(mask&(1<<b)));
    }
    puts("\n");
    return 0; 
}