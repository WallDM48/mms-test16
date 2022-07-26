#include<stdio.h>
//imeto na masiva e adres kym pyrviq element

void printArr(int *arr, int len){
    for(int i=0;i<len;i++){
        printf("%d\n",*(arr+i));
    }
}
int main(){
 //int numbers[] = {1,2,3,4,5,6};
int num3[15];
int num[3];
int num2[15];
/*for(int i=0;i<10;i++){
    scanf("%d",num+i);

}
for(int i=0;i<10;i++){
        printf("Arr: %d\n",i[num]);
    }  
*/
printArr(num,3);

    return 0;
}