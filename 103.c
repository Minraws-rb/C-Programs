//103.	fork() function explanation and examples
/* 
fork() is a system call in Unix/Linux that creates a new child process by duplicating the calling (parent) process.

Key Features of fork():
Creates a child process that runs independently of the parent.
Both parent and child process execute the same code after fork().
The child process gets a unique Process ID (PID) but inherits memory, file descriptors, and environment variables from the parent.
The return value of fork() helps differentiate parent and child:
Parent process: fork() returns the child’s PID (positive integer).
Child process: fork() returns 0.
Failure: fork() returns -1 (error).
*/
/*
#include <stdio.h>
#include <process.h>
int main()
{
    int pid;
    pid = fork();
    if (pid == 0)
    {
        printf("Child process\n");
    }
    else
    {
        printf("Parent process\n");
    }
    return 0;
}
    */