#include<stdio.h>
#include<stdlib.h>


int val(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    else
        return c - 'A' + 10;
}

void print_Hex(FILE *f){
    char c;
    while(c = fgetc(f) !=EOF)
    {
        printf("%c",val(c));
    }
}

int main(int argc, char **argv){
    FILE *fp = fopen(argv[1],"r");
    print_Hex(fp);
    fclose(fp);

    return 0;
}