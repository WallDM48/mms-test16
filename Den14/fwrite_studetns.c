#include<stdio.h>

typedef struct Student{
    double grade;
    unsigned int courses_taken;
    char name[7];
    unsigned char age;

}Student;

int main(){
    Student students[5];
    students[0] = (Student){2.3,110,"Ivan",25};
    students[1] = (Student){11.3,10,"Krisa",20};
    students[2] = (Student){14.,50,"Deni",35};
    students[3] = (Student){20.,11,"Veni",15};
    students[4] = (Student){3.1,100,"Koko",13};
    
    FILE *f = fopen("Students_list","wb");

    fwrite(students,sizeof(Student),5,f);

    fclose(f);
    return 0;
}