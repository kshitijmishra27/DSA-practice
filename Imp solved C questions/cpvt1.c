#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 255

int palindrome(char *string, int x, int y) 
{
    if (x >= y)
        return 0;
    while (y > x)
        if (tolower(string[x++]) != tolower(string[--y]))
            return 0;
    return 1;
}

int main()
{
    char reading[MAX+1]; 
    int x, y, i;
    FILE *r;
    r=fopen("input5.txt", "rt"); 
    if(r==NULL)
        perror("File does not exist");
    else {
        while (fgets (reading, MAX, r) != NULL) {
            x = 0;
            do {
                while (reading[x] && !isalpha (reading[x]))
                    x++;
                y = x;
                while (isalpha (reading[y]))
                    y++;
                if (palindrome (reading, x, y)) {
                    printf ("Palindrome: ");
                    for (i=x; i<y; i++)
                        printf ("%c", reading[i]);
                    printf ("\n");
                }
                x = y;
            }
            while (reading[x]);
        }
        fclose(r);
    }
    return 0;
}