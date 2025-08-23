#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int pid;
    char name[50];
    int priority;
} Process;

int main() {
    printf("Process Simulator v1.0 - Terminal Version\n");
    printf("========================================\n");
    printf("This version was created via command line\n");
    
    Process test_process = {1001, "text_editor", 5};
    printf("Sample process: PID=%d, Name=%s, Priority=%d\n", 
           test_process.pid, test_process.name, test_process.priority);
    
    return 0;
}
