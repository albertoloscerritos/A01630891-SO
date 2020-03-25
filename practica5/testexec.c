#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
void forkexample() 
{ 
    if (fork() == 0) 
        execlp("ls", "ls", "-a", "/", (char *)NULL);
  
    else
        printf("Hello from Parent!\n"); 
} 
int main() 
{ 
    forkexample(); 
    return 0; 
} 