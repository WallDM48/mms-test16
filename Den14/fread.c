#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *f = fopen("test_text_file","r");
     if(!f){
        perror("COuld not open file\n");
        exit(-1);
    }
    char arr[12];
    fread(arr,sizeof(char),12,f);
    printf("%s\n",arr);

    //fwrite(arr,sizeof(char),12,stdout);

    fclose(f);
    return 0;
}