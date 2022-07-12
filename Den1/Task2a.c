#include<stdio.h>
#include<math.h>
#define PI 3.14

int main(){
    double R, H;
    puts("Enter the R and H of the barrel");
    scanf("%lf %lf",&R,&H);
    double Volume=2*R*H*PI;
    printf("The volume of the barrel is %.2lf\n",Volume);

    return 0;
}