#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *f = fopen("test_text_file","w");
    if(!f){
        perror("COuld not open file\n");
        exit(-1);
    }
    char *arr = "Hello world!";
    fwrite(arr,sizeof(char),12,f);
    fclose(f);

    return 0;
}