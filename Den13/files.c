#include<stdio.h>

int main(){
//FILE *fp fopen
   FILE *f = fopen("Hello_World","a");
   fputc('H',f);
   fputc('E',f);
   fputc('L',f);
   fputc('L',f);
   fputc('O',f);
   fputs(" WORLD\n",f);
   fclose(f);
    return 0;
}