#include <stdio.h>
#include <unistd.h>

int main() {
    int num1 = 10, num2 = 20;
    pid_t pid = fork();

    if (pid == -1) {
        perror("Fork failed");
        return 1;
    }

    if (pid > 0) { // Parent process
        int result = num1 + num2;
        printf("Parent process: Sum = %d\n", result);
    } else { // Child process
        // Child process does nothing here
    }

    return 0;
}
