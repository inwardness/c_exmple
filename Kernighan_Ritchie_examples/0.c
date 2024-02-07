

#include <conio.h>
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
    int k;
    char c;
    while ((k = getch()) != EOF)
    {
<<<<<<< HEAD
      
        if(c==' ')
    }
>>>>>>> 9286d8ee0132734f7e3b711ca0505c5bb5bfe55f
=======
        if (k == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (k == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (k == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
            putchar(k);
    };
    return 0;
>>>>>>> f46e952e1d1db11a8a5b5fb305885bdc10e4cfb7
}