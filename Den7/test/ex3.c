#include <stdio.h>

int main(){
    size_t n, current, count, i = 0, test;
    char encrypted[100] = "";
    printf("Enter a number: \n");
    scanf("%lu", &n);
    test = n;
    while (test != 0)
    {
        test %= 10;
        test /= 10;
        count++;
    }
    
    while (n != 0)
    {
        
        if (count % 2 == 0) {
            //chetna
            current = n % 10;
            switch (current) {
            case 0: encrypted[i] = 'A'; break;
            case 1: encrypted[i] = 'B'; break;
            case 2: encrypted[i] = 'C'; break;
            case 3: encrypted[i] = 'D'; break;
            case 4: encrypted[i] = 'E'; break;
            case 5: encrypted[i] = 'F'; break;
            case 6: encrypted[i] = 'G'; break;
            case 7: encrypted[i] = 'H'; break;
            case 8: encrypted[i] = 'I'; break;
            case 9: encrypted[i] = 'J'; break;
            
            default: printf("Invalid number!\n"); break;
            }
        } 
        else {
            //nechetna
            current = n % 10;
            switch (current) {
            case 0: encrypted[i] = '!'; break;
            case 1: encrypted[i] = '#'; break;
            case 2: encrypted[i] = '/'; break;
            case 3: encrypted[i] = '~'; break;
            case 4: encrypted[i] = '='; break;
            case 5: encrypted[i] = '`'; break;
            case 6: encrypted[i] = '|'; break;
            case 7: encrypted[i] = '>'; break;
            case 8: encrypted[i] = '.'; break;
            case 9: encrypted[i] = ','; break;
            
            default: printf("Invalid number!\n"); break;
            }
        }
        i++;
        n /= 10;
        count--;
    }
    
    printf("%s\n", encrypted);
    return 0;
}