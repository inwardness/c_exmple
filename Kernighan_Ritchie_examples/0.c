#include <stdio.h>

int main() {
    FILE *file;
    int value;

    // Open the file
    file = fopen("example.txt", "r");

    // Check if the file is opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read values from the file until the end
    while (fscanf(file, "%d", &value) == 1) {
        // Process the value
        printf("Read value: %d\n", value);
    }

    // Check if an error occurred during reading
    if (feof(file)) {
        printf("End of file reached.\n");
    } else if (ferror(file)) {
        perror("Error reading from file");
    }

    // Close the file
    fclose(file);

    return 0;
}