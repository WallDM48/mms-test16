#include<stdio.h>

int main(){
    char arr[500];
    //int a = 0;
    scanf("%s",arr);
    for(int i =0; i<500 || i!=EOF;i++){
        if(i%2 == 0){
            arr[i] = 65 + arr[i];

        }
        else{
            switch (arr[i])
            {
            case '0':
            arr[i] = '!';
                break;
            case '1':
            arr[i] = '#';
                break;
            case '2':
            arr[i] = '/';
                break;
            case '3':
            arr[i] = '~';
                break;
            case '4':
            arr[i] = '=';
                break;
            case '5':
            arr[i] = '`';
                break;
            case '6':
            arr[i] = 92;
                break;
            case '7':
            arr[i] = '>';
                break;
            case '8':
            arr[i] = '.';
                break;
            case '9':
            arr[i] = ',';
                break;            
            default:
                break;
            }
        }

    }
    printf("The encrypted string : %s\n",arr);

    return 0;
}