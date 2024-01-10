#include <stdio.h>

<<<<<<< HEAD
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
=======
int main()
{   
    int i;
    int words[10];
    for( i = 0;i < 10; ++i)
    words[i] = 0;
    char c;
    while((c=getchar())!=EOF)
    {
      
        if(c==' ')
    }
>>>>>>> 9286d8ee0132734f7e3b711ca0505c5bb5bfe55f
}