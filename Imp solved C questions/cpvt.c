#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fptr;
    char ch;
    int wrd = 1;

    printf("\n\n Count the number of words and characters in a file :\n");

    fptr = fopen("input5.txt", "r");
    if (fptr == NULL)
    {
        printf(" File does not exist or can not be opened.");
    }
    else
    {
        ch = fgetc(fptr);
        printf(" The content of the file “input5.txt” are : ");
        while (ch != EOF)
        {
            printf("%c", ch);
            if (ch == ' ' || ch == '\n')
            {
                wrd++;
            }
            ch = fgetc(fptr);
        }
        printf("\n The number of words in the  file input5.txt are : %d\n", wrd - 2);
    }
    fclose(fptr);
}