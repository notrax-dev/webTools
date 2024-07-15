#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *commands[] = {
        "sudo apt install nodejs",
        "sudo apt install npm", 
        "sudo apt install python3", 
        "sudo apt install python3-pip", 
        "sudo apt install code"       
    };
    int num_commands = sizeof(commands) / sizeof(commands[0]);

    printf("Installing required web development tools:\n");

    for (int i = 0; i < num_commands; i++) {
        int status = system(commands[i]);
        if (status != 0) {
            fprintf(stderr, "Error installing %s (exit code %d)\n", commands[i], status);
            return 1; 
        } else {
            printf("%s successfully installed.\n", commands[i]);
        }
    }

    printf("Web development tools installation complete.\n");
    return 0;
}
