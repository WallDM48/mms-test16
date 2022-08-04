#include<stdio.h>

typedef struct Student{
    double grade;
    unsigned int courses_taken;
    char name[7];
    unsigned char age;

}Student;

int main(){
    Student students[5];
    
    FILE *f = fopen("Students_list","rb");

    fread(students,sizeof(Student),5,f);
    for(int i=0;i<5;i++){
    printf("%lf %u %s %d\n",students[i].grade,students[i].courses_taken,students[i].name,students[i].age);
    }
    fclose(f);
    return 0;
}