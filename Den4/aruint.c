#include<stdio.h>
#include<stdint.h>

int setBit(uint32_t* mask, size_t len, size_t bit){
        if(len*sizeof(*mask)*__CHAR_BIT__<=bit){
            return 1;
          // puts("Error\n");

        }
        int index = bit / (sizeof(*mask)*__CHAR_BIT__);
        int b = bit % (sizeof(*mask)*__CHAR_BIT__);
        mask[index] |=(1ull<<b);
        return 0;

}
int clearBit(uint32_t* mask,unsigned len, unsigned bit){
        if(len*(sizeof(*mask)*__CHAR_BIT__)<=bit){
            return 1;
             //puts("Error\n");

        }
        int index = bit / (sizeof(*mask)*__CHAR_BIT__);
        int b = bit % (sizeof(*mask)*__CHAR_BIT__);
        mask[index] &= ~(1<<(b));
          return 0;

}
int flipBit(uint32_t* mask,unsigned len, unsigned bit){
        if(len*sizeof(*mask)*__CHAR_BIT__<=bit){
            return 1;
             puts("Error\n");

        }
        int index = bit / (sizeof(*mask)*__CHAR_BIT__);
        int b = bit % (sizeof(*mask)*__CHAR_BIT__);
        mask[index] ^=(1<<(b));
           return 0;

}
int checkBit(uint32_t* mask,unsigned len, unsigned bit){
        if(len*(sizeof(*mask)*__CHAR_BIT__)<=bit){
            return -1;
        }
        int index = bit / (sizeof(*mask)*__CHAR_BIT__);
        int b = bit %(sizeof(*mask)*__CHAR_BIT__);
       
       return !!(mask[index] & (1<<(b)));

}

void printBit(uint32_t* mask,unsigned len){
    for(int i=sizeof(*mask)*__CHAR_BIT__*len-1;i>=0;i--){
         printf("%2d ",i);
    }
    puts("\n");
    for(int i=sizeof(*mask)*__CHAR_BIT__*len-1;i>=0;i--){
         printf("%2d ",checkBit(mask, len, i));
    }
    puts("\n");
}

#define L 2
int main(){


uint32_t mask[]={0,0};
//unsigned bit;
//int option;
size_t p=5;

        
            setBit(mask, L, p);
                //fprintf(stderr,"Mask overflow\n");
            
            setBit(mask,L,9);
            clearBit(mask,L,5);
            checkBit(mask,L,6);
            flipBit(mask,L,6);
        
    
        puts("The final number is:\n");

          printBit(mask,L);

    return 0;
}