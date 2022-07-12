#include<stdio.h>
#include<math.h>

int main(){
    float mass, height;
    puts("Enter your mass and height");
    scanf("%f %f",&mass,&height);
    float BMI=mass/pow(height,2);
    printf("Your BMI index is %f",BMI);

    return 0;
}