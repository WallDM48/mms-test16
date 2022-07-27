#include<stdio.h>
int c=09090900;

void fun(int b){
    **b= 1000;
    *b = &c;

}

int main(){
    int a = 10;
    int *a_ad = &a;
    int **a_ad_ad = &a_ad;
    return 0;
}