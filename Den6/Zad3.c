#include<stdio.h>

int main(){
    #if OS == 1
        printf("Hello, Linux\n");
        #elif OS == 2
        printf("Hello WIndows\n");
        #else
        printf("Hello, macOS\n");
        
        
    #endif

    return 0;
}
// #error generirame kompilacionna greshka i programata ne se izpylnqva
// __FILE__ izvejda imeto na samiqt fail
// __TIMESTAMP__ kazva kolko e chasyt i datata
// __STDC__ ako e standartno C wryshta 1 
// __LINE__ WRYSHTA REDA NA KOITO SE NAMIRAM