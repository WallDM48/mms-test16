#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>

int main(int arc, char **argv){

    int fd_in = open(argv[1],O_RDONLY);
    int fd_out = open(argv[2],O_WRONLY | O_CREAT | O_EXCL
    ,S_IRUSR | S_IWUSR);
    lseek(fd_in,-5,SEEK_END);
    if(fd_in == -1){
        perror("Could not open file !\n");
        return -1;
    } 
    if(fd_out == -1){
        perror("Could not open file !\n");
        return -1;
    } 
    char cur_sym;
    int read_count;
    int writen_count;
    // while (read_count !=0)
    while(read_count =read(fd_in,&cur_sym,1)!=0)
    {
    
    if(read_count == -1){
        perror("Could not read the file!\n");
    }
    
    writen_count = write(fd_out,&cur_sym,1);
    if(writen_count == 0){
        perror("Write error\n");
        return -1;
    }
    }
    close(fd_in);
    close(fd_out);
    return 0;
}