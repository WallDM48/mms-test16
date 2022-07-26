#include<stdio.h>
#include<stdint.h>

#define SETBIT(mask,bit) mask |= (1ull<<(bit))
#define CLEARBIT(mask,bit) mask &= ~(1ull<<(bit))
#define CHECKBIT( mask,bit) !!(mask&(1ull<<(bit)))
#define FLIPBIT( mask,bit) mask ^= (1ull<<(bit))

int main(){
    uint32_t mask=1;
    SETBIT(mask,1);
    FLIPBIT(mask,2);
    CLEARBIT(mask,1);
    for(int i = sizeof(uint32_t)*__CHAR_BIT__-1;i>=0;i--){
        printf("%d",!!(mask&(1u<<i)));

    }
    puts("\n");
    return 0;
}