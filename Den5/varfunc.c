#include<stdio.h>
#include<stdarg.h>
#include<float.h>

int sum(int cnt,...){
    
    int sum=0;
    va_list args;
    va_start(args,cnt);
    for(int i=0; i<cnt; i++){
        sum += va_arg(args,int);
    }
    va_end(args);
    return sum;
}
int sum2(int num, ...){
    
    
    va_list args;
    va_start(args,num);
    int sum;
    int n=va_arg(args,int);
    sum =n;
    while(n!=0){
        sum+= n;
        n = va_arg(args, int);
    }
    va_end(args);
    return sum;
}
double max(int cnt, ...){
    double maxn=__DBL_MIN__;
    va_list args;
    va_start(args, cnt);
    for(int i=0; i<cnt; i++){
        double num = va_arg(args, double);
        if(num>maxn){
            maxn=num;
        }
    }
    va_end(args);
    return maxn;


}

int main(){
   // printf("%d\n",sum(3,5,6,7));
   // printf("%.2lf\n",max(2,3.1,2.2));
    printf("%d\n",sum2(3,5,5,6,7,0));
    return 0;
}