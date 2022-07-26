#include<stdio.h>

#define PI 3.14
#define SUM(x,y) x+y
#define MULT(x,y) ((x)*(y))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define FORI(start, end, step) for(int i = start; i <= end; i +=step)
#define SWAP(a,b) {a ^= b;\
                   b ^= a;\
                   a ^=b;} 
#define MAX4(a,b,c,d) MAX(MAX(a,b), MAX(c,d))

int max(int a, int b){
    return a > b ? a : b;
}

int main(){
   /* double r = 2; 
    double S = PI*r*r;
    double P = 2 * PI* r;
   // printf("%lf\n",S);
   // printf("%lf\n",P);
    //printf("Hello world\n");
    int result = (SUM(10,-20))*2;
    int res = MULT(10+1,2+3);
    printf("%d\n", res);*/
    int a=20;
    int b = 30;
    int c = MAX(a++,b++);
    printf("%d %d %d\n",a,b,c);
    /*printf("%d %d\n",a, b);
    SWAP(a,b);
    printf("%d %d\n",a, b);*/
    return 0;
}