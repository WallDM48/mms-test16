#include <stdio.h>

#define OS 1
#define DEBUG
int main(){
    #ifdef DEBUG
        printf("debugging mode on\n");

        #if OS == 1
        printf("Hello, Linux\n");
        #elif OS == 2
        printf("Hello WIndows\n");
        #else
        printf("Hello, macOS\n");
        #endif
    #endif

#undef OS
#undef DEBUG
#define OS 3
     #ifdef DEBUG
        printf("debugging mode on\n");

        #if OS == 1
        printf("Hello, Linux\n");
        #elif OS == 2
        printf("Hello WIndows\n");
        #else
        printf("Hello, macOS\n");
        #endif
        #else
        printf("debugging mode off\n");
    #endif

    return 0; 
}