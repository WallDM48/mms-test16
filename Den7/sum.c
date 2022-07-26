#include<stdio.h>

double sum(double n1,double n2){
    return n1+n2;
}
double raz(double n1,double n2){
    return n1-n2;
}
double mult(double n1,double n2){
    return n1*n2;
}
double div(double n1,double n2){
    return n1/n2;
}

int main(){
     
     double (*calcFunc[4])(double,double)={sum,raz,mult,div};
     
     int num;
     scanf("%d",&num);
     printf("%.2lf\n",calcFunc[num](5.1,4.0));

    

    return 0;
}