#include<stdio.h>
#include<stdint.h>

unsigned zerosCount(uint64_t mask1,uint32_t mask2, uint16_t mask3, uint8_t mask4){
 int sum0 = 0;
    for(int i = 0; i < sizeof(uint64_t)*8; i++){
        if(!(!!mask1&(1u<<i))){
            sum0++;
        }
    }
    for(int i = 0; i < sizeof(uint32_t)*8; i++){
        if(!(!!mask2&(1u<<i))){
            sum0++;
        }
    }
    for(int i = 0; i < sizeof(uint16_t)*8; i++){
        if(!(!!mask3&(1u<<i))){
            sum0++;
        }
    }
    for(int i = 0; i < sizeof(uint8_t)*8; i++){
        if(!(!!mask4&(1u<<i))){
            sum0++;
        }
    }
    return sum0;

}

void flipOddBits(uint64_t* mask){
    for (int i =sizeof(uint64_t)*__CHAR_BIT__-1; i >= 0; i--){
        if(i % 2 !=0){
            *mask ^= (1ull<<i);
        }
    }
    for (int i =0; i < sizeof(uint64_t)*__CHAR_BIT__; i++){
        printf("%d",!!(*mask&(1ULL<<i)));
    }
    puts("\n");
}

void mirrorBits(uint16_t* mask){
    for(int i =0; i < sizeof(uint16_t)*__CHAR_BIT__; i++){
         printf("%d",!!(*mask&(1ULL<<i)));

    }
    puts("\n");
}


int main(){
    uint64_t mask1 = 0;
    uint32_t mask2 = 0;
    uint16_t mask3 = 0b0011111100000011;
    uint8_t mask4 = 1;
    printf("%u\n",zerosCount(mask1, mask2, mask3, mask4));
    flipOddBits(&mask1);
    mirrorBits(&mask3);
    return 0;
}


