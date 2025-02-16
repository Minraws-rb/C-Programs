//102.	C program to get Process Id
#include <stdio.h>
#include <process.h> 

int main() {
pid_t pid;
    pid = getpid();

    printf("Process ID: %d\n", pid);

    return 0;
}
