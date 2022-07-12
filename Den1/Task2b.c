#include<stdio.h>
#include<math.h>
#define PI 3.14

int main(){
    double R, H,L;
    puts("Enter the R,L and H of the barrel");
    scanf("%lf %lf %lf",&R,&L,&H);
    double Area=acos((R-H)/R)*R*R-(R-H)*sqrt(2*R*H-H*H);
    printf("The volume of the barrel is %.2lf\n",Area*L);

    return 0;
}