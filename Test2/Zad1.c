#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int compare1(const void* num1, const void* num2){
    double fa = *(const double*) num1;
    double fb = *(const double*) num2;
    return (fa > fb) - (fa < fb);
   
    }
int compare2(const void* num1, const void* num2){
    double fa = *(const double*) num1;
    double fb = *(const double*) num2;
    return  (fa < fb)- (fa > fb) ;
}    
int compare3(const void* num1, const void* num2){
    return 0;
} 
int compare4(const void* num1, const void* num2){
    double fa = *(const double*) num1;
    double fb = *(const double*) num2;
    return fabs((fa > fb)) - fabs((fa < fb));
    
}


int main(){
    if(COUNT <MIN && COUNT > MAX){
        fprintf(stderr,"Invalid input\n");
    }
    else{
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
    }
    return 0;
}

//gcc  Zad1.c -D COUNT=3 -D MAX=5 -D MIN=1