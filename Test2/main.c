#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include"comparators.h"

#define COUNT 3
#define MIN
#define MAX



int main(){
    int (*compArr[4])(const void*,const void*) = {compare1,compare2,compare3,compare4};
    double arr[COUNT];
    for(int i=0; i<COUNT ;i++){
        scanf("%lf",&arr[i]);
    }
    int num;
    scanf("%d",&num);
    puts("\n");
    qsort(arr,COUNT,sizeof(double),compArr[num]);
    for(int i=0; i<COUNT ;i++){
        printf("%lf\n",arr[i]);
    }
    
    return 0;
}