#include<stdio.h>

int main(){
    int v;
    
    scanf("%d",&v);
    printf("%d\n",v);
    
    fscanf(stdin,"%d",&v);
    fprintf(stdout,"%d\n",v);
    
    return 0;
}