#include<stdio.h>
int arr[100];
int arrC=0;

int main(){

    FILE *f = fopen("numbers","r");
    int i=0;
    int cur_num;
    for (;fscanf(f,"%d",arr+arrC) !=EOF;arrC++){
    }
    for(int i=0;i<arrC;i++){
        printf("%d ",arr[i]);
    }
    fclose(f);
    return 0; 
}