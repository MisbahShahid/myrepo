#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main () 
{
    
    int childpid=fork();
    if(childpid<0)
{
    perror("Failed to fork");
    return 1;
}
    if(childpid==0)
    printf("I am the child :%id \n",getpid());
    else 
    printf("I am parent :%id \n", getpid());
    return 0;
}
