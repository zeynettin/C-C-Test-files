#include <stdio.h>
#include <stdlib.h>

int main() {
    // Using system() function to execute a command
    int status = system("mkdir test");
    //int status2 = system("rmdir test");

    // Checking if the command executed successfully
    if (status == -1) {
        printf("Failed to execute the command.\n");
        return 1;
    } else {
        printf("Command executed successfully.\n");
        return 0;
    }
}

