#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct {
    int pid;
    char name[50];
    int priority;
} Process;

int main() {
    printf("Process Simulator v2.0 - Merged Version\n");
    printf("=======================================\n");
    printf("This version combines web and terminal development\n");
    
    Process test_process = {1001, "text_editor", 5};
    printf("Sample process: PID=%d, Name=%s, Priority=%d\n", 
           test_process.pid, test_process.name, test_process.priority);
    
    printf("Successfully resolved merge conflict!\n");
    return 0;
}
