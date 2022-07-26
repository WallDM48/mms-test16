#include <stdio.h>
#include <stdint.h>

void setZ(int* n){ //(formalni parametry)
    *n=0;
}

void swapN(int* n1, int* n2){
    int temp =*n1;
    *n1=*n2;
    *n2=temp;
}

void setBit(__uint64_t* mask, unsigned bit){
    *mask |=(1ull<<bit);

}
void clearBit(__uint64_t* mask, unsigned bit){
    *mask &= ~(1ull<<bit);

}
void flipBit(__uint64_t* mask, unsigned bit){
    *mask ^=(1ull<<bit);

}
int checkBit(__uint64_t* mask, unsigned bit){
return !!(*mask&(1ull<<bit));

}
int main(){

    uint64_t attendance = 0;
    int option;
    int bit;
    while (1)
    {
        printf("1. Set attendance\n");
        printf("2. Clear attendance\n");
        printf("3. Attendance info\n");
        printf("4. Change attendance\n");
        printf("5. Exit\n");
        scanf("%d", &option);
         if(5 == option)
        {
            break;
        }
        
        if (1 == option)
        {   
            puts("Which bit you want to modify\n");
            scanf("%d",&bit);
            setBit(&attendance,bit);
        }
        else if (2 == option)
        {
            puts("Which bit you want to modify\n");
            scanf("%d",&bit);
           clearBit(&attendance,bit);
        }
        else if (3 == option)
        {
           puts("Which bit you want to check\n");
            scanf("%d",&bit);
           printf("%s\n",checkBit(&attendance,bit) ? "tuk" : "otsustva");
    }
        
        else if(4 == option)
        {   puts("Which bit you want to modify\n");
            scanf("%d",&bit);
           flipBit(&attendance,bit);
        }
    }
    puts("The final number is:\n");
    for(int b=sizeof(attendance)*__CHAR_BIT__-1;b>=0;b--){

        printf("%d",!!(attendance&(1ULL<<b)));
    }
    puts("\n");
    return 0; 
}