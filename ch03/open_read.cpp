#include <iostream>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    int fd = open("../1.txt", O_RDONLY);
    std::cout << "fd = " << fd << std::endl;
    char buf[4096];
    while (read(fd, buf, 4096)> 0)
    {
        std::cout << buf << std::endl; 
    }
    close(fd);
}