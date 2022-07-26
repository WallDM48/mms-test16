#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int compare1(const void* num1, const void* num2){
    return *(int*)num1-*(int*)num2;
}
int compare2(const void* num1, const void* num2){
    return *(int*)num2-*(int*)num1;
}

int compare3(const void* num1, const void* num2){
    return fabs(*(int*)num1)-fabs(*(int*)num2);
}
int compare4(const void* num1, const void* num2){
    return fabs(*(int*)num2)-fabs(*(int*)num1);
}

int main(){
    int (*compArr[4])(const void*,const void*) = {compare1,compare2,compare3,compare4};
    int numbers[10] = {-1,0,231,5,-41,511,4,2,99,-2};
    int num;
    scanf("%d",&num);
   puts("\n");
    qsort(numbers,10,sizeof(int),compArr[num]);
    for(int i=0; i<10;i++){
        printf("%d\t",numbers[i]);
    }
    


    return 0;
}