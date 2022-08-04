#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *f = fopen("test_binary_file","wb");
    if(!f){
        perror("COuld not open file\n");
        exit(-1);
    }
    long arr[]= {63213123123, 612313124, 611115 ,6123213126};
    fwrite(arr,sizeof(long),4,f);
    fclose(f);

    return 0;
}