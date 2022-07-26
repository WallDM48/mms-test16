#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MIN -200
#define MAX  200
#define COUNT 10

void randinit(void);
int randint(int min, int max);
double randreal(double min, double max);
int compareDouble1(const void* num1, const void* num2);
int compareDouble2(const void* num1, const void* num2);
int compareInt(const void* num1, const void* num2);
void sortUprising();
void sortDownfalling();
void sortUprisingWithInt();