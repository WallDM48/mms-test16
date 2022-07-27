#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argp[]){
    FILE *f = fopen(argp[1],"r");
    if(f == NULL){
        perror("Could not open the file\n");
        exit(1);
    }
    fseek(f,0,SEEK_END);
    int sym_count= ftell(f);
    int cur_sym;
    fseek(f,sym_count/2,SEEK_SET);
    while(cur_sym !=EOF){
        cur_sym = fgetc(f);
    printf("%c",cur_sym);
    }
   // printf("%ld\n",ftell(f));
    fclose(f);
    return 0;
}