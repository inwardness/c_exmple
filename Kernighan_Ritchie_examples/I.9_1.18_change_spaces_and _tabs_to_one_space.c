#define MAX_ROWS 10
#define MAX_COLS 200
#define EMPTY 0;
#include <stdio.h>

// int gtstring(char line[],int lim);
void cstring(char line[], int lim);

int gtstring(char line[], int lim);

<<<<<<< HEAD
int main(){
    char line[MAX_COLS];
    char massivelines[MAX_ROWS][MAX_COLS];
    int len = 0;
    int i, j = 0;
    int count = -1;
    // reset to zero two-measure massive
    cstring(line, MAX_COLS);
    for (i = 0; i < MAX_ROWS; i++){
        for (j = 0; j < MAX_COLS; j++){
=======
int main()
{

    char line[MAX_COLS];
    char massivelines[MAX_ROWS][MAX_COLS];

    int len = 0;
    int i, j = 0;
    int count = -1;

    // reset to zero two-measure massive
    cstring(line, MAX_COLS);
    for (i = 0; i < MAX_ROWS; i++)
    {
        for (j = 0; j < MAX_COLS; j++)
        {
>>>>>>> 37e817b59ae8d7c50b51859da7a0c5046a73fb7f
            massivelines[i][j] = 0;
        }
    }
    printf("print string with tabs spaces or empty string:\n");
<<<<<<< HEAD
    while ((len = gtstring(line, MAX_COLS)) > 0){
        if (len > 2){
            ++count;
            for (i = 0; i < MAX_ROWS; i++){
                if (i == count){
                    for (i = 0; i < len; i++){
=======
    while ((len = gtstring(line, MAX_COLS)) > 0)
    {
        if (len > 2)
        {
            ++count;
            for (i = 0; i < MAX_ROWS; i++)
            {
                if (i == count)
                {
                    for (i = 0; i < len; i++)
                    {
>>>>>>> 37e817b59ae8d7c50b51859da7a0c5046a73fb7f
                        massivelines[count][i] = line[i];
                    }
                }
            }
        }
<<<<<<< HEAD
        else if (len == 2){
            for (i = 0; i < len; i++){
                if (line[i] != ' ' && line[i] != '\t')
                    ++count;
                for (i = 0; i < MAX_ROWS; i++){
                    if (i == count){
                        for (i = 0; i < len; i++){
                            massivelines[count][i] = line[i];                      }
=======
        else if (len == 2)
        {
            for (i = 0; i < len; i++)
            {
                if (line[i] != ' ' && line[i] != '\t')
                    ++count;
                for (i = 0; i < MAX_ROWS; i++)
                {
                    if (i == count)
                    {
                        for (i = 0; i < len; i++)
                        {
                            massivelines[count][i] = line[i];
                        }
>>>>>>> 37e817b59ae8d7c50b51859da7a0c5046a73fb7f
                    }
                }
            }
        }
        else
            continue;

        cstring(line, MAX_COLS);
    }
<<<<<<< HEAD
    for (i = 0; i < MAX_ROWS; i++){
        printf("%s", massivelines[i]);
    }
=======
    for (i = 0; i < MAX_ROWS; i++)
    {

        printf("%s", massivelines[i]);
    }

>>>>>>> 37e817b59ae8d7c50b51859da7a0c5046a73fb7f
    return 0;
}

int gtstring(char line[], int lim)
{
    int i, c;
    char t = '\t';
    char s = ' ';
    int count = 0;

<<<<<<< HEAD
    for (i = 0; i < lim && ((c = getchar()) != EOF && c!='\n'); i++)
=======
    for (i = 0; i < lim && ((c = getchar()) != EOF); i++)
>>>>>>> 37e817b59ae8d7c50b51859da7a0c5046a73fb7f
    {
        if (c == t || c == s)
        {
            c = s;
            ++count;
            if (count == 1)
            {
                line[i] = c;
            }
            else if (count > 1)
            {
                --i;
            }
        }
        else if (c == '\n')
        {
            line[i] = c;
<<<<<<< HEAD
            ++i;
            line[i] = '\0';
=======
            line[++i] = '\0';
>>>>>>> 37e817b59ae8d7c50b51859da7a0c5046a73fb7f

            return i;
        }
        else
            count = 0;
        line[i] = c;
    }
    return i;
}

void cstring(char line[], int lim)
{
    int i;
    for (i = 0; i < lim; i++)
    {
        line[i] = '\0';
    }
    line[lim] = EOF;
}
