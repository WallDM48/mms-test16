#include "1-comparator.h"

void randinit(void){
    srand(time(NULL));
}

int randint(int min, int max){
    return min + rand() % (max - min + 1);
}

double randreal(double min, double max){
    return min + ((double)rand() / RAND_MAX) * (max - min);
}

int compareDouble1(const void* num1, const void* num2){
    return (*(double*)num1 > *(double*)num2) ? 1 : (*(double*)num1 < *(double*)num2) ? -1:0;
}

int compareDouble2(const void* num1, const void* num2){
    return (*(double*)num1 < *(double*)num2) ? 1 : (*(double*)num1 > *(double*)num2) ? -1:0;
}

int compareInt(const void* num1, const void* num2){
    return (*(int*)num1 > *(int*)num2) ? 1 : (*(int*)num1 < *(int*)num2) ? -1:0;
}

void sortUprising(){
    int (*myComparator)(const void*, const void*);
    myComparator = &compareDouble1;
    double numbers[COUNT];
    for (size_t i = 0; i < COUNT; i++)
        numbers[i] = randreal((MIN), (MAX));
    
    qsort(numbers, COUNT, sizeof(numbers[0]), myComparator);
    for (size_t i = 0; i < COUNT; i++)
        printf("%.2f ", numbers[i]);
    putchar('\n');
}

void sortDownfalling(){
    int (*myComparator)(const void*, const void*);
    myComparator = &compareDouble2;
    double numbers[COUNT];
    for (size_t i = 0; i < COUNT; i++)
        numbers[i] = randreal((MIN), (MAX));
    
    qsort(numbers, COUNT, sizeof(numbers[0]), myComparator);
    for (size_t i = 0; i < COUNT; i++)
        printf("%.2f ", numbers[i]);
    putchar('\n');
}

void sortUprisingWithInt(){
    int (*myComparator)(const void*, const void*);
    myComparator = &compareInt;
    int numbers[COUNT];
    for (size_t i = 0; i < COUNT; i++)
        numbers[i] = randint((MIN), (MAX));
    

    int sum = 0;
    int numbers2[COUNT] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    for(int i = 0; i < COUNT; i++){
        int current = numbers[i];
        while (current != 0) {
            sum += (current % 10);
            current /= 10;
        }
        numbers2[i] += sum;
        sum = 0;
    }

    qsort(numbers2, COUNT, sizeof(numbers2[0]), myComparator);
    for (size_t i = 0; i < COUNT; i++)
        printf("%d ", numbers2[i]);
    putchar('\n');
}