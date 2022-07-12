#include<stdio.h>
#include<math.h>

int main(){
    double mass, height;
    puts("Enter your mass and height");
    scanf("%lf %lf",&mass,&height);
    double BMI=mass/pow(height,2.0);
    printf("Your BMI index is %.2lf\n",BMI);

    return 0;
}