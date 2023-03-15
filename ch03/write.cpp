#include <unistd.h>
#include <iostream>
#include <fcntl.h>
#include <string.h>

int main()
{
    int fd;
    int buf_size = 4096;
    char buf[buf_size];
    strcpy(buf, "ghi");
    if((fd = open("../1.txt", O_WRONLY|O_APPEND)) < 0)
    {
        std::cerr << "open file error!" << std::endl;
    }
    if(write(fd, buf, 3) < 0)
    {
        std::cerr << "write data error!" << std::endl;
    }
    close(fd);
}