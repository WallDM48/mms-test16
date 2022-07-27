#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char* argp[]){
    FILE *f =fopen(argp[1],"r");
    int word_counter =0;
    int res = 0; 
    int cur_sym;
    char *word = argp[2];
    if(f == NULL){
        perror("Could not open the file\n");
        exit(1);
    }
    while((cur_sym= getc(f)) !=EOF){
        if(cur_sym != word[word_counter]){
            word_counter =0;;
        }
        if(cur_sym == word[word_counter]){
            word_counter ++;
        }
        if(word[word_counter]== '\0'){
            res++;
            word_counter =0;
        }
    }
    printf("%d\n",res);

    fclose(f);
    return 0;
}