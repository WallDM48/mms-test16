#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<stdio.h>

//file descriptor
// number >= 0 
int main(){
    int fd = open("test_binary",O_WRONLY | O_TRUNC);
    printf("%d\n",fd); // 3
    if(fd == -1){
        perror("Could not ope file\n");
    }
    int arr[] = {11,12,13,14};
    //int sym_num = strlen(buf);
    int writen_count =  write(fd,arr,sizeof(int)*4);
    if(writen_count != sizeof(int)*4){
        write(2,"Could not open file\n",21);
    }
    close(fd);
    return 0;
}