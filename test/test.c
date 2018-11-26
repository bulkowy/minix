#include <stdio.h>
#include <group.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]){

    int actual_group;
    int pid;
    int i, j;

    pid = getpid();
    actual_group = getgroup(pid);

    printf("(%d): Grupa - %d\n", pid, actual_group);
    chgroup(pid);
    actual_group = getgroup(pid);
    printf("(%d): Po zmianie: Grupa - %d\n", pid, actual_group);

    for( i = 0; i < 2000; i++)
	for(j = 0; j < 2000; j++);

    return 0;
}
