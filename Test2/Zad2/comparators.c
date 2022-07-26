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