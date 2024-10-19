// rewind() :- set pointer at the file begning
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("data.txt", "r");
    while (1)
    {
        ch = fgetc(ptr);
        if(ch==EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    rewind(ptr);
       while (1)
    {
        ch = fgetc(ptr);
        if(ch==EOF)
        {
            break;
        }
        printf("%c", ch);
    }
 
    fclose(ptr);
}