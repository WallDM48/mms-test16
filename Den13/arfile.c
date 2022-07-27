#include<stdio.h>
int a[]={1,2,4,5,67};
int aC =5;
int main(){
    
    FILE *f = fopen("numbers","w");
    for(int* i =a; i<a + aC;i++){
        fprintf(f,"%d\t",*i);
    }
    fclose(f);
    return 0; 
}