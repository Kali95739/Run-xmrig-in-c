#include <stdio.h>
#include <stdlib.h>

int main() {
    // Command to run xmrig with your pool address and wallet address
    const char *command = "./xmrig -o your-pool-address:port -u your-wallet-address -p x";

    // Execute the command using system()
    int result = system(command);

    // Check if the command was executed successfully
    if (result == -1) {
        perror("Error executing xmrig");
        return 1;
    }

    printf("xmrig executed successfully.\n");
    return 0;
}
